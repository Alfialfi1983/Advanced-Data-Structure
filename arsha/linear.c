#include<stdio.h>
void main()
{
int a[10],i,n,key,f=0;
printf("enter the limit \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter the elements");
 scanf("%d",&a[i]);
}
printf("enter the elements to be searched \n");
scanf("%d",&key);
for(i=0;i<n;i++)
  {
    if(a[i]==key)
      {
       f=1;
       break;
      }
  }
 if(f==1)
  { 
    printf("element is found \n");
  }
else
  {
    printf("elememt is not found \n");
  }
}


