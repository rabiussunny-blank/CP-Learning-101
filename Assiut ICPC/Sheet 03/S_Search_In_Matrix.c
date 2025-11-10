#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);  // input number of rows and columns

    int A[N][M];

    // input elements of the 2D array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);  // input number to search

    int found = 0; // flag variable

    // check if X exists in the array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] == X) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        printf("will not take number\n");
    else
        printf("will take number\n");

    return 0;
}
