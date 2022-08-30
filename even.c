
#include<stdio.h>
void even(int *n);
void odd(int *n);
void prime(int *n);

int main()
{
int n;
printf("enter the number");
scanf ("%d",&n);

even(&n);
odd(&n);
prime(&n);
return 0;
}
void even(int *n)
{
if(*n%2==0)
    {  
       printf("This is a even no");
      *n = *n+2;
        printf ("%d",(*n));
      }
}

void odd(int *n)
{
if(*n%2!=0)
    {  
       printf("This is a odd no");
      *n = *n-1;
        printf ("%d",(*n));
      }
}

void prime(int *n)
{
int count =0;
int i;
for (i=1;i<=*n;i++)
{
if(*n%i==0)
{
count++;
}
}
if(count==2)
{
printf ("This is a prime no\n");
*n=(*n)*4;
printf("%d",(*n));
}

}
