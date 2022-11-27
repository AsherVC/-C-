#include<stdio.h>
#include<math.h>
int main()
{
    int r,c,i,j,r1,c1,k;
    printf("\n First Matrix");
    printf("\nEnter row size:");
    scanf("%d",&r);
    printf("Enter column size:");
    scanf("%d",&c);
    int a[r][c],b[r][c],p[10][10];
    printf("\nEnter the elements:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nSecound Matrix");
    printf("\nEnter row size:");
    scanf("%d",&r1);
    printf("Enter column size:");
    scanf("%d",&c1);
    printf("\nEnter the elements:");
    if(c==r1)
    {
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&b[i][j]);
            }
        
        }
    }
    printf("\nProduct matrix is:");
        for(i=0;i<r;i++)
        {
            printf("\n");
            for(j=0;j<c1;j++)
            {
                p[i][j]=0;
                for(k=0;k<c;k++)
                {
                    p[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    for(i=0;i<r;i++){
        printf("\n");
        for(j=0;j<c1;j++){
           printf("%d ",p[i][j]);
        }
    }
    return 0;
}