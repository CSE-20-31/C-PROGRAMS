#include<stdio.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct student s[100];

    int i,n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the details of the student %d: ", i+1);
        scanf("%d %s %f", &s[i].rollno, &s[i].name, &s[i].marks);
    }

    printf("\n");


    for(i=0; i<n; i++)
    {
        printf("%d \t %s \t %f \n", s[i].rollno, s[i].name, s[i].marks);

    }
    int k =0, max;

     max = s[0].marks;
    for(i=1; i<n; i++)
    {
        if(max<s[i].marks)
       {
         max = s[i].marks;
         k=i;
       }

    }
    printf("The topper is %s with %f marks", s[k].name, s[k].marks);

}

