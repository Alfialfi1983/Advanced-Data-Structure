#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head;

void main()
{
int choice=0;
printf("\n \tstack operation using linkedlist\n");
printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT");
do
{
printf("enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("exit");
break;
default:
printf("invalid choice");
}
}
while(choice!=4);
}
void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof (struct node *));
if(newnode==NULL)
{
printf("overflow");
}
else
{
printf("enter the data in to the stack");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
{
newnode->next=head;
head=newnode;
}
printf("elemnt insered successfully \n");
}
}
void pop()
{
struct node *temp;
if(head==NULL)
{
printf("underflow");
}
else
{
temp=head;
head=temp->next;
free(temp);
printf("deleted successfully \n");
}
}
void display()
{
struct node *temp;
if(head==NULL)
{
printf("stack is empty \n");
}
else
{
temp=head;
printf("%d \n",temp->data);
while(temp->next!=NULL)
{
temp=temp->next;
printf("%d \n",temp->data);
}
}
}
