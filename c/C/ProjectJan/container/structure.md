CWebServer/
│── main.c # Entry point, starts server
│── server.c # Server logic (sockets, requests)
│── server.h # Server header file
│── request.c # Parses HTTP requests
│── request.h # Request handling header
│── response.c # Generates HTTP responses
│── response.h # Response handling header
│── file_utils.c # Reads files (HTML, CSS, JS)
│── file_utils.h # File handling header
│── logger.c # Logging system
│── logger.h # Logger header
│── public/ # Public directory (HTML files)
│ │── index.html # Sample webpage
│ │── style.css # Sample CSS file
│── Makefile # Build script

Project Idea:
Multithreaded Web Server in C

A fully functional web server that:

- Handles multiple client requests using threads.
- Serves HTML pages dynamically.
- Implements basic HTTP methods (GET, POST).
- Supports static file hosting (CSS, JS, images).
- Includes logging and error handling.
