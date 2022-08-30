#include<stdio.h>
void fact(int a,int *f);
int main()
{
int i,a,f;

printf("Enter the number");
scanf("%d",&a);

fact (a,&f);
printf("The factorial of %d is %d",a,f);
return 0;
}

void fact(int a,int *f)
{
int i;
*f=1;
for(i=1;i<=a;i++)
{
*f=*f*i;
}
}