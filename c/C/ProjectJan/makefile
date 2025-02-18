CC=gcc
CFLAGS=-Wall -pthread
OBJS=main.o server.o request.o response.o file_utils.o logger.o

all: webserver

webserver: $(OBJS)
	$(CC) $(CFLAGS) -o webserver $(OBJS)

clean:
	rm -f webserver $(OBJS)
