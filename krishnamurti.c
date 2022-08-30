#include<stdio.h>
int fact(int);
int main()
{
int num,digit,sum,temp;
printf("Enter any number");
scanf("%d",&num);
temp=num;
while(num<0)
{
    digit=num%10;
    sum=sum+fact(digit);
num=num/10;
}
if(sum==temp)
{
    printf("numberf is a krishna murti no");
}
else{
    printf("This is not akrishna murti no");
}
return 0;
}

int fact(int num)
{
    int fact=1;
    while (num>=1)
    {
        fact=fact*num;
        num--;
    }
    return(fact);
}