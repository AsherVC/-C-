#include<stdio.h>
#define max 20
struct sparce_matrix{
    int row;
    int col;
    int val;
};
struct sparce_matrix sparce1[max];
struct sparce_matrix sparce2[max];
int size1,size2;
struct sparce_matrix sum[max];
int sum_size;
int rows,columns;
int matrix1[20][20],matrix2[20][20],matrixsum[20][20];
void printmatrix(int matrix[20][20]){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}
void tosparcematrix(){
    int i,j,k1=1,k2=1;
    sparce1[0].row=rows;
    sparce2[0].row=rows;
    sparce1[0].col=columns;
    sparce2[0].col=columns;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(matrix1[i][j]){
                sparce1[k1].row=i+1;
                sparce1[k1].col=j+1;
                sparce1[k1].val=matrix1[i][j];
                k1++;
            }
            if(matrix2[i][j]){
                sparce2[k2].row=i+1;
                sparce2[k2].col=j+1;
                sparce2[k2].val=matrix2[i][j];
                k2++;
            }
        }
    }
    
    size1=k1;
    sparce1[0].val=k1-1;
    size2=k2;
    sparce2[0].val=k2-1;
}
void printsparce(struct sparce_matrix sparce[20],int size){
    int i;
    for(i=0;i<size;i++){
        printf("\n");
        printf("%d %d %d",sparce[i].row,sparce[i].col,sparce[i].val);
    }
}
void calcsum(){
    sum[0].row=sparce1[0].row;
    sum[0].col=sparce1[0].col;
    int i=1,j=1,k=1;
    while(i<size1 && j<size2){
        if(sparce1[i].row==sparce2[j].row && sparce1[j].col==sparce2[j].col){
            sum[k].row=sparce1[i].row;
            sum[k].col=sparce1[i].row;
            sum[k].val=sparce1[i].val+sparce2[j].val;
            i++;
            j++;
        }
        else if(sparce1[i].row==sparce2[j].row){
            sum[k].row=sparce1[i].row;
            if(sparce1[i].col<sparce2[j].col && i<size1){
                sum[k].col=sparce1[i].col;
                sum[k].val=sparce1[i].val;
                i++;
            }
            else{
                sum[k].col=sparce2[j].col;
                sum[k].val=sparce2[j].val;
                j++;
            }
        }
        else{
            if(sparce1[i].row<sparce2[j].row){
                sum[k].row=sparce1[i].row;
                sum[k].col=sparce1[i].col;
                sum[k].val=sparce1[i].val;
                i++;
            }
            else{
                sum[k].row=sparce2[j].row;
                sum[k].col=sparce2[j].col;
                sum[k].val=sparce2[j].val;
                j++;
            }
        }
        k++;
    }
    while(i<size1){
        sum[k].row=sparce1[i].row;
        sum[k].col=sparce1[i].col;
        sum[k].val=sparce1[i].val;
        i++;
        k++;
    }
    while(j<size2){
        sum[k].row=sparce2[j].row;
        sum[k].col=sparce2[j].col;
        sum[k].val=sparce2[j].val;
        j++;
        k++;
    }
    sum_size=k;
    sum[0].val=k-1;
}
void main(){
    int i,j,row2,col2;
    printf("\nMATRIX A\n");
    printf("Enter no of rows:");
    scanf("%d",&rows);
    printf("Enter no of columns:");
    scanf("%d",&columns);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("Enter element[%d][%d]:",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printmatrix(matrix1);
    tosparcematrix();
    printf("\nSPARCE MATRIX A\n");
    printsparce(sparce1,size1);
    printf("\nMATRIX B\n");
    printf("Enter no of rows:");
    scanf("%d",&row2);
    printf("Enter no of columns:");
    scanf("%d",&col2);
    if(row2!=rows || col2!=columns){
        printf("Not possible");
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("Enter element[%d][%d]:",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printmatrix(matrix2);
    tosparcematrix();
    printf("\nSPARCE MATRIX B\n");
    printsparce(sparce2,size2);
    calcsum();
    printf("\nSUM OF SPARCE MATRIX A & B\n");
    printsparce(sum,sum_size);
}
