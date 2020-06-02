#include <stdio.h>

void printmat(int n, int m, int mat[n][m])
{
    for (int row = 0; row < n; ++row)
    {
        for (int column = 0; column < m; ++column)
        {
            printf("%d, ", mat[row][column]);
            
        }
        printf("\n");
    }
}

void transpose(int n, int m, const int A[n][m], int AT[m][n])
{
    for (int q = 0; q < n; ++q)
    {
        for(int w = 0; w < m; ++w)
        {
            AT[w][q] = A[q][w];
        }
    }
}

int main()
{
    int n, m;
    char filename[478];
    printf("enter number of rows: ");
    scanf("%d", &n);
    printf("enter number of columns: ");
    scanf("%d", &m);
    printf("enter filename: ");
    scanf("%s", filename);
    FILE* fin = fopen(filename, "r");
    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        fscanf(fin, "%d", &A[i][j]);
    
    int AT[m][n];
    
    printf("orignal matrix\n");
    printmat(n, m, A);
    transpose(n, m, A, AT);
    printf("transpose matrix\n");
    printmat(m, n, AT);

    return 0;
}

