#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define MAX_SIZE 1000
#define THREAD_COUNT 4

// Structure for matrix multiplication
typedef struct
{
    int row;
    int col;
    int (*A)[MAX_SIZE];
    int (*B)[MAX_SIZE];
    int (*C)[MAX_SIZE];
} MatrixData;

// Structure for linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Fibonacci with memoization (Recursion + DP)
long long fib(int n, long long *memo)
{
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
}

// Thread function for matrix multiplication
void *multiply_matrices(void *arg)
{
    MatrixData *data = (MatrixData *)arg;
    int sum = 0;
    for (int i = 0; i < data->col; i++)
    {
        sum += data->A[data->row][i] * data->B[i][data->col];
    }
    data->C[data->row][data->col] = sum;
    return NULL;
}

// Function to generate random matrices
void generate_matrix(int mat[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }
}

// Insert into linked list
Node *insert(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// Print linked list
void print_list(Node *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    srand(time(NULL));
    int n = 40; // Fibonacci
    long long memo[MAX_SIZE];
    memset(memo, -1, sizeof(memo));
    printf("Fibonacci(%d) = %lld\n", n, fib(n, memo));

    int size = 3;
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE] = {0};
    generate_matrix(A, size);
    generate_matrix(B, size);

    pthread_t threads[THREAD_COUNT];
    MatrixData thread_data[THREAD_COUNT];
    for (int i = 0; i < THREAD_COUNT; i++)
    {
        thread_data[i] = (MatrixData){i, i, A, B, C};
        pthread_create(&threads[i], NULL, multiply_matrices, (void *)&thread_data[i]);
    }
    for (int i = 0; i < THREAD_COUNT; i++)
    {
        pthread_join(threads[i], NULL);
    }

    Node *head = NULL;
    for (int i = 0; i < 10; i++)
    {
        head = insert(head, rand() % 100);
    }
    print_list(head);

    return 0;
}
