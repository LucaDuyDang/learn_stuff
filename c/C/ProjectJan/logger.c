#include "logger.h"
#include <stdio.h>
#include <time.h>

void log_message(const char *message)
{
    FILE *logfile = fopen("server.log", "a");
    time_t now = time(NULL);
    fprintf(logfile, "[%s] %s\n", ctime(&now), message);
    fclose(logfile);
}
