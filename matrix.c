#include <stdio.h>

int main()
{
    int m, n;
    int a[10][20];
    int i, j;
    printf("Enter the no of rows of the matrix:");
    scanf("%d", &m);
    printf("Enter the no of columns of the matrix:");
    scanf("%d", &n);

    printf("Enter the values of the %d X %d matrix ", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //diplay the contents
     printf("The %d X %d matrix is \n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
