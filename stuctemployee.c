#include<stdio.h>
struct employee
{
    int salary;
    int eid;
    char name[30];
}e[50];
void main()
{
    int n,i;
    printf("enter the number of employees : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the name ;");
        scanf("%s",e[i].name);
        printf("enter the emp  id :");
        scanf("%d",&e[i].eid);
        printf("enter the salary ");
        scanf("%d",&e[i].salary);

    }
    for(i=0;i<n;i++)
    {
        printf("name : %s\nemployee id:%d\nsalary : %d",e[i].name,e[i].eid,e[i].salary);
        
    }
}