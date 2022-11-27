#include<stdio.h>
void readp(int[],int);
void displayp(int[],int);
int addp(int[],int[],int[],int,int);
void main(){
    int n,m,r;
    int ar[10]={0};
    int br[10]={0};
    int sr[10]={0};
    printf("\nPolynomial 1\n");
    printf("Enter the max degree:");
    scanf("%d",&n);
    
    readp(ar,n);
    printf("Polynomial 1 is:\n");
    displayp(ar,n);
    printf("\nPolynomial 2\n");
    printf("Enter the max degree:");
    scanf("%d",&m);
    
    readp(br,m);
    printf("Polynomial 2 is:\n");
    displayp(br,m);
    printf("\nSUM is\n");
    r=addp(ar,br,sr,n,m);
    displayp(sr,r);
}
void readp(int ar[],int a){
    int i;
    for(i=0;i<=a;i++){
            printf("Enter variable coefficient of degree[%d]:",i);;
            scanf("%d",&ar[i]);
    }
}
void displayp(int ar[],int n){
    int i;
    for(i=n;i>=0;i--){
            if(ar[i]>0){
                if(i==n){
                    printf("%dx^%d",ar[i],i);
                }
                else if(i==1){
                    printf("+%dx",ar[i]);
                }
                else if(i==0){
                    printf("+%d=0",ar[i]);
                }
                else{
                    printf("+%dx^%d",ar[i],i);
                }
            }
            else if(ar[i]<0){
                if(i==1){
                    printf("%dx",ar[i]);
                }
                else if(i==0){
                    printf("%d=0",ar[i]);
                }
                else{
                    printf("%dx^%d",ar[i],i);
                }
                 }
        
    }

}
int addp(int ar[],int br[],int sr[],int n,int m){
    int o,i;
    o=n>m?n:m;
    for(i=0;i<=o;i++){
        sr[i]=ar[i]+br[i];
    }
    return o;
}
