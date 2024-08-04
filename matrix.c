#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int a[10][10], b[10][10], result[10][10];

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
