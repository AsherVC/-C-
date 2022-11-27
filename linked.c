#include<stdio.h>
#include<stdlib.h>
void main(){
struct node{
    int data;
    struct node *next;
};
struct node *head;
struct node *newnode;
struct node *temp;
head=NULL;
int choice=1;
while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
   if(head==0)
{head=temp=newnode;}
    else{
        temp->next=newnode;
        temp=newnode;
    }
printf("CONTINUE??(1/0):");
scanf("%d",&choice);
}
printf("--------------------------------\n");
temp=head;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}