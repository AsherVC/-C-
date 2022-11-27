#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int FRONT=-1;
int REAR=-1;
int Q[20];
int n;
void select();
void enqueue();
void dequeue();
void display();
void main(){
    printf("Enter the Size:");
    scanf("%d",&n);
    select();
   }
void select(){
    int o;
    //clrscr();
    printf("\n-----------------SELECT ONE------------------\n");
    printf("\n---1.ENQUEUE---2.DEQUEUE---3.DISPLAY---4.EXIT\n");
    printf("Enter your choice:");
    scanf("%d",&o);
    switch(o){
        case 1:endueue();
        //system("cls");
        select();
        break;
        case 2:dequeue();
        //system("cls");
        select();
        break;
        case 3:display();
        select();
        break;
        case 4:
        break;
        default:printf("\n!!!!!INVALID!!!!!\n");
        select();
        break;

    }
    getch();
}
void endueue()
{   
    int x;
    printf("Enter a element:");
    scanf("%d",&x);
    if(FRONT==-1 && REAR==-1){
        FRONT=REAR=0;
        Q[REAR]=x;}
    else if(REAR==n-1){
        printf("!!!OVERFLOW!!!\n");
    }
    else{
        REAR++;
        Q[REAR]=x;
    }
    display();
}
void dequeue(){
    if(FRONT==-1 && REAR==-1){
        printf("!!!UNDERFLOW!!!");
    }
    else if(FRONT==REAR){
        FRONT=REAR=-1;
    }
    else{
        printf("Deleted element is:%d\n",Q[FRONT]);
        FRONT++;
    }
    display();
}
void display(){
    int i;
    if(FRONT==-1 && REAR==-1){
        printf("\n===EMPTY===\n");
    }
    else{
        for(i=FRONT;i<=REAR;i++){
            printf("%d\n",Q[i]);
        }
    }
}