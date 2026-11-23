
#include <stdio.h>

#define MAX 10

void addition(int A[MAX][MAX], int B[MAX][MAX], int r, int c)
{
    int i, j;
    printf("\nMatrix Addition:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d ", A[i][j] + B[i][j]);
        printf("\n");
    }
}

void multiplication(int A[MAX][MAX], int B[MAX][MAX],
                    int r1, int c1, int c2)
{
    int i, j, k, sum;

    printf("\nMatrix Multiplication:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            sum = 0;
            for(k = 0; k < c1; k++)
                sum += A[i][k] * B[k][j];

            printf("%d ", sum);
        }
        printf("\n");
    }
}

void transpose(int A[MAX][MAX], int r, int c)
{
    int i, j;

    printf("\nTranspose of Matrix A:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", A[j][i]);

        printf("\n");
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter Matrix A elements:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter Matrix B elements:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    if(r1 == r2 && c1 == c2)
        addition(A, B, r1, c1);
    else
        printf("\nAddition not possible\n");

    if(c1 == r2)
        multiplication(A, B, r1, c1, c2);
    else
        printf("\nMultiplication not possible\n");

    transpose(A, r1, c1);

    return 0;
}
