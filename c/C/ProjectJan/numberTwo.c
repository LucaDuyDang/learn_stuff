#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <limits.h>
#include <string.h>

#define MAX 100
#define INF INT_MAX

// ANSI escape codes for Dark Mode colors
#define RESET "\033[0m"
#define WALL "\033[1;31m"  // Red
#define PATH "\033[1;36m"  // Cyan
#define START "\033[1;32m" // Green
#define END "\033[1;33m"   // Yellow
#define BG_DARK "\033[40m" // Black background

typedef struct
{
    int x, y, dist;
} Node;

typedef struct
{
    Node nodes[MAX * MAX];
    int size;
} PriorityQueue;

char maze[MAX][MAX];
int dist[MAX][MAX], visited[MAX][MAX];
int rows, cols, startX, startY, endX, endY;
pthread_mutex_t lock;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// Priority Queue functions
void push(PriorityQueue *pq, int x, int y, int dist)
{
    pq->nodes[pq->size++] = (Node){x, y, dist};
}

Node pop(PriorityQueue *pq)
{
    int minIndex = 0;
    for (int i = 1; i < pq->size; i++)
        if (pq->nodes[i].dist < pq->nodes[minIndex].dist)
            minIndex = i;

    Node minNode = pq->nodes[minIndex];
    pq->nodes[minIndex] = pq->nodes[--pq->size];
    return minNode;
}

// Check if a position is valid
int isValid(int x, int y)
{
    return x >= 0 && y >= 0 && x < rows && y < cols && maze[x][y] != '#' && !visited[x][y];
}

// Multi-threaded Dijkstra’s algorithm
void *dijkstra(void *arg)
{
    PriorityQueue pq = {.size = 0};
    push(&pq, startX, startY, 0);
    dist[startX][startY] = 0;

    while (pq.size > 0)
    {
        Node current = pop(&pq);
        int x = current.x, y = current.y, d = current.dist;

        if (x == endX && y == endY)
            return NULL;
        if (visited[x][y])
            continue;

        pthread_mutex_lock(&lock);
        visited[x][y] = 1;
        pthread_mutex_unlock(&lock);

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if (isValid(nx, ny) && dist[x][y] + 1 < dist[nx][ny])
            {
                dist[nx][ny] = dist[x][y] + 1;
                push(&pq, nx, ny, dist[nx][ny]);
            }
        }
    }
    return NULL;
}

// Reads maze from a file
void loadMaze(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("File open failed");
        exit(EXIT_FAILURE);
    }

    fscanf(file, "%d %d", &rows, &cols);
    for (int i = 0; i < rows; i++)
    {
        fscanf(file, "%s", maze[i]);
        for (int j = 0; j < cols; j++)
        {
            dist[i][j] = INF;
            if (maze[i][j] == 'S')
            {
                startX = i;
                startY = j;
            }
            if (maze[i][j] == 'E')
            {
                endX = i;
                endY = j;
            }
        }
    }
    fclose(file);
}

// Print the solved maze in Dark Mode
void printMaze()
{
    printf(BG_DARK); // Set background to black
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (maze[i][j] == '#')
                printf(WALL "# " RESET);
            else if (maze[i][j] == 'S')
                printf(START "S " RESET);
            else if (maze[i][j] == 'E')
                printf(END "E " RESET);
            else if (visited[i][j])
                printf(PATH "* " RESET);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf(RESET); // Reset colors
}

int main()
{
    pthread_t thread;
    pthread_mutex_init(&lock, NULL);

    loadMaze("maze.txt");
    pthread_create(&thread, NULL, dijkstra, NULL);
    pthread_join(thread, NULL);

    printf("Solved Maze (Dark Mode):\n");
    printMaze();

    pthread_mutex_destroy(&lock);
    return 0;
}
