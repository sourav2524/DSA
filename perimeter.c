#include<stdio.h>
int main()
{
    int length,width,perimeter;
    printf("Enter length");
    scanf("%d",&length);

    printf("enter width");
    scanf("%d",&width);

    perimeter=2*(length+width);
    printf("perimeter is %d ",perimeter);
    return 0;

}