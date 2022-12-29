#include <stdio.h>
#include <stdlib.h>

#define MAX_DIM 100

/* board dimensions */
typedef struct board_square {
    char a;
} board_square_t;

int main(void)
{
    int m, n, error;
    board_square_t* board;

    printf("Please specify the board height: \n");
    error = scanf("%d", &m);
    if (EOF == error) {
        printf("No integer passed: Die evil hacker!\n");
        return -1;
    }
    printf("Please specify the board width: \n");
    error = scanf("%d", &n);
    if (EOF == error) {
        printf("No integer passed: Die evil hacker!\n");
        return -1;
    }
    if (m > MAX_DIM || n > MAX_DIM) {
        printf("Value too large: Die evil hacker!\n");
        return -1;
    }

    board = (board_square_t*)malloc(m * n * sizeof(board_square_t));
    if (!board) {
        printf("Failed to allocate board...\n");
        return -1;
    }

    printf("Allocated %d bytes.\n", (int)(m * n * sizeof(board_square_t)));

    free(board);

    return 0;
}
