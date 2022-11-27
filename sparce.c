#include<stdio.h>
void reads();
void readss(int a,int b,int c,int A[][10]);
void transpose(int hr[][3]);
void main(){
	printf("---------SPARCE MATRIX ADDITION-------\n");
	printf("\n--------------MATRIX A------------\n");
	reads();
	printf("\n--------------MATRIX B------------\n");
	reads();
	}
void reads(){
	int i,r,c,k=0,j,ar[10][10];
 	printf("Enter no of rows:");
 	scanf("%d",&r);
 	printf("Enter no of columns:");
 	scanf("%d",&c);
 	for(i=0;i<r;i++){
 		for(j=0;j<c;j++){
 			printf("Enter element:[%d][%d]",i,j);
 			scanf("%d",&ar[i][j]);}}
 			if(ar[i][j]!=0){
 				k++;}
 	for(i=0;i<r;i++){
 		for(j=0;j<c;j++){
 			printf(" %d",ar[i][j]);}
 			printf("\n");}
 	readss(r,c,k,ar);
 }
 void readss(int r,int c,int k,int A[][10]){
 	int AR[20][20],i,j,k1=1;
 	AR[0][0]=r;
 	AR[0][1]=c;
 	for(i=0;i<r;i++){
 		for(j=0;j<c;j++){
 			if(A[i][j]!=0){
 				AR[k1][0]=i;
 				AR[k1][1]=j;
 				AR[k1][2]=A[i][j];
 				k1++;
 			}
 		}
 	}
	AR[0][2]=k1-1;
 	printf("---------SPARCE MATRIX-------\n");
 	for(i=0;i<k1;i++){
 		for(j=0;j<3;j++){
 			printf(" %d",AR[i][j]);}
 			printf("\n");}
	transpose(AR);
 }
void transpose(int hr[][3]){
	int tr[10][3];
	int i,j,c=1,temp,e,r;
	tr[0][1]=hr[0][0];
	tr[0][0]=hr[0][1];
	tr[0][2]=hr[0][2];
	for(i=0;i<hr[0][0];i++){
		for(j=1;j<=hr[0][2];j++){
			if(hr[j][1]==i){
				tr[c][0]=i;
				tr[c][1]=hr[j][0];
				tr[c][2]=hr[j][2];
				c++;}
		}
		

	}
	printf("---------TRANSPOSE MATRIX-------\n");
 	for(e=0;e<=hr[0][2];e++){
 			printf(" %d %d %d\n",tr[e][0],tr[e][1],tr[e][2]);}
}

