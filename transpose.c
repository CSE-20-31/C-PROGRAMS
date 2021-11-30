#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
    int m, n;
    int i, j;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix\n");

    for (i = 0; i < m; i++)

    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }

    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }


     for (i = 0; i < n; i++)

    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
      }
