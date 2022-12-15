#include<stdio.h>
int sum()
{
int a,b,sum=0;
printf("enter the number a and b");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d",sum);
}
void main()
{
int s=0;
printf("sum of number using function \n");
s=sum();
}


