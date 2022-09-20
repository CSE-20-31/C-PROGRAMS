#include<stdio.h>

int main()
{
    char *p, *q;
    int i,n;

    printf("Enter the size of string: ");
    scanf("%d", &n);

    p = malloc(sizeof(char)*n);
    q = p;

    printf("Enter the string: ");
    scanf("%s", p);

    printf("The entered string is: ");

    while(*q != '\0')
    {

        printf("%c", *q);
        q++;
    }

    free(p);
    free(q);


}
