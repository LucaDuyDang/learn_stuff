#include "response.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void send_response(int client_socket, const char *status, const char *content_type, const char *body)
{
    char response[4096];
    sprintf(response,
            "HTTP/1.1 %s\r\n"
            "Content-Type: %s\r\n"
            "Content-Length: %ld\r\n"
            "\r\n"
            "%s",
            status, content_type, strlen(body), body);

    send(client_socket, response, strlen(response), 0);
}
