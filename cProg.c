#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[50][50];
    int num = 1;

    // Fill column-wise
    for (int col = 0; col < N; col++) {
        for (int row = col; row < N; row++) {
            arr[row][col] = num++;
        }
    }

    // Print row-wise
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}