#include<stdio.h>
int main()
{
    int a[10],l,i,j,temp;
    printf("enter the limit ;");
    scanf("%d",&l);
    printf("enter the elements : ");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the bubble sorted array : ");
    for (i=0;i<l;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}