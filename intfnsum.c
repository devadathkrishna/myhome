#include<stdio.h>
int myFunction(int a,int b)
{
int c;
c=a+b;
return (c);
}
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
int result=myFunction(a,b);
printf(" result is =%d!\n",result);
return 0;
}
