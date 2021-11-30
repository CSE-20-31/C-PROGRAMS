#include <stdio.h>
int factorial(int);

int main()
{
    int x;
    int ans;
    printf("Enter the number\n");
    scanf("%d",&x);
    ans= factorial(x);
    printf("The factorial of %d is %d \n]",x,ans);

}
int factorial (int n)
{
    if (n>1)
    {
        return n*factorial(n-1);
    }
    else
    return 1;


}
