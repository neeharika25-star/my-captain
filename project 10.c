#include <stdio.h>
struct employee
{
    int age,phone,salary;
    char name[25];
}emp[100];
 
void main()
{
    int i,n;
    n==20;
    printf("Enter employee name , age , phone , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",emp[i].name,&emp[i].age,&emp[i].phone,&emp[i].salary);
    }
    printf("\nNAME\tAGE\t\tPHONE\t\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phone,emp[i].salary);
    }
}
