#include<stdio.h>
#include<string.h>

int main()
{

    char ch;
    int count=0;
    FILE *p;
    p = fopen("a.txt", "r");
    if(p==NULL)
    printf("No such file exists in the documents");
    else
{
    ch = getc(p);
    count++;
    while(ch!= EOF)
{
    //printf("%c", ch);
    ch = getc(p);
    count++;
}
printf("\n");

printf("The no of characters in the file are %d: ", count-1);
}


}
