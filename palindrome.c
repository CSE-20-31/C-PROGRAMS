#include <stdio.h>

int main()
{
    char string[40];
    int lenght = 0, flag = 1, i;
    printf("Enter the string\n");
    gets(string);

    for ( i = 0; string[i]!='\0'; i++)

    {
        lenght=lenght+1;
    }

     for ( i = 0; i < lenght/2; i++)
     {
         if (string[i] != string[lenght-1-i])
         {
             flag=0;
             break;
         }

     }


 if (flag==1)
 {
     printf("The string is palindrome");

 }
 else

{
printf("The string is not palindrome");


}
    return 0;
}
