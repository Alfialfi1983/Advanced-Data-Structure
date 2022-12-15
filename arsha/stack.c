#include<stdio.h>
int stack[100],n,top,ch,i,x;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("enter the size of the stack");
scanf("%d",&n);
printf("\n\t stack operations using array");
printf("\n \t 1.push \n\t 2.pop \n\t 3.dispaly \n\t 4.exit \n\t");
do
{
printf("\n enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("exit");
break;
}
default:
{
printf("invalid choice");
}
}
}
while(ch!=4);
return 0;
}
void push()
{
if(top==n-1)
{
printf("stack is overflow");
}
else
{
printf("enter a value to be pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top==-1)
{
printf("stack is underflow");
}
else
{
x=stack[top];
top--;
printf("deleted element is %d \n",x);
}
}
void display()
{
if(top>=0)
{
printf("the element in the stack \n");
for(i=top;i>=0;i--)
{
printf("%d \n",stack[i]);
}
}
}
