#include<stdio.h>

void swap(int *x, int *y)
{

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x,y;
    printf("Enter the 2 numbers you want to swap: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("The swapped numbers are %d %d: ", x,y);

}
