#include<stdio.h>
int  prime(int n);


int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    prime(n);

}
int prime(int n)
{
    int i,count=0;
    for ( i = 1; i < n; i++)
    {
        if(n%i==0){
count++;
        }
    }
    if(count==2)
    {
        printf("This is prime no");
    }
    else{
        printf("This is not prime");
    }
    

}
