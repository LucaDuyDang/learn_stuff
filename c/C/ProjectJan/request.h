#ifndef REQUEST_H
#define REQUEST_H

typedef struct
{
    char method[8];
    char path[256];
} HttpRequest;

HttpRequest parse_request(const char *request);

#endif
