#include "server.h"
#include "request.h"
#include "response.h"
#include "logger.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 8080
#define MAX_CLIENTS 10

void *handle_client(void *socket_desc)
{
    int client_socket = *(int *)socket_desc;
    char buffer[4096];
    recv(client_socket, buffer, sizeof(buffer), 0);

    HttpRequest request = parse_request(buffer);
    log_message(request.path);

    if (strcmp(request.path, "/") == 0)
    {
        send_response(client_socket, "200 OK", "text/html", "<h1>Welcome to C Web Server</h1>");
    }
    else
    {
        send_response(client_socket, "404 Not Found", "text/html", "<h1>404 Not Found</h1>");
    }

    close(client_socket);
    free(socket_desc);
    return NULL;
}

void start_server(int port)
{
    int server_fd, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_len = sizeof(client_addr);

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(port);

    bind(server_fd, (struct sockaddr *)&server_addr, sizeof(server_addr));
    listen(server_fd, MAX_CLIENTS);

    printf("Server started on port %d\n", port);

    while (1)
    {
        client_socket = accept(server_fd, (struct sockaddr *)&client_addr, &client_len);
        pthread_t thread;
        int *new_sock = malloc(1);
        *new_sock = client_socket;
        pthread_create(&thread, NULL, handle_client, (void *)new_sock);
    }
}
