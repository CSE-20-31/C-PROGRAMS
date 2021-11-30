#include <string.h>
#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter string\n");
    gets(s);
    strrev(s);
    printf("the reverse string is %s\n", s);

    return 0;
}
