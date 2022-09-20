#include<stdio.h>

int main()
{
    int i,n;
    int sum =1;

    printf("Enter the position upto which you want to print the series: ");
    scanf("%d", &n);

    printf("The series is: ");

    for(i=1; i<=n; i++)
    {
        sum = sum*2;
        printf("%d ", sum);

    }

    return 0;

}

