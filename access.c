//Access the array elements

#include<stdio.h>
int main()
{
int arr[10];
int i;

printf("Enter the elements");
for (i=0;i<10;++i)
   scanf("%d",arr+i);

printf ("The elements are:");
for(i=0;i<10;++i)
printf ("%d",*(arr+i));

return 0;
}