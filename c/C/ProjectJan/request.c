#include "request.h"
#include <stdio.h>
#include <string.h>

HttpRequest parse_request(const char *request)
{
    HttpRequest req;
    sscanf(request, "%s %s", req.method, req.path);
    return req;
}
