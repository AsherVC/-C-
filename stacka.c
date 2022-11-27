#include<stdio.h>
void push();
void pop();
void display();
void select();
int top=-1,a[20],i,s;
void main(){
    printf("ENter the size:");
    scanf("%d",&s);
    select();
}
void select(){
    int so;
    printf("\n------------SELECT ONE------------\n");
    printf("\n1.PUSH----2.POP----3.DISPLAY----4.EXIT\n");
    printf("\nEnter your choice:");
    scanf("%d",&so);
    switch(so){
        case 1:push();
        select();
        break;
        case 2:pop();
        select();
        break;
        case 3:display();
        select();
        break;
        case 4:
        break;
        default:printf("!!!!!!!!!!!INVALID!!!!!!!!!");
        select();
        break;
    }
}
void push(){
    int item;
    if(top>=s-1){
        printf("Stack is full");
    }
    else{
        printf("Enter the element to push:");
        scanf("%d",&item);
        top++;
        a[top]=item;
    }
    display();
}
void pop(){
    int item;
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        item=a[top];
        top--;
        printf("Popped element is:%d",item);
    }
    display();
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",a[i]);
    }
}