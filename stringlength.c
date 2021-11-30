#include <stdio.h>

int main()
{
char s[100];
int i;
printf("Enter string\n");
gets(s);
i=0;
while (s[i]!='\0')
{
    i++;
}
printf("The LENGTH of entered string is %d ",i);
    return 0;
}
