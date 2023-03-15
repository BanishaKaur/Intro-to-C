#include<stdio.h>

int main(void)
{
    int n=0;
    printf("Enter the number whose factorial is to be obtained\n");
    scanf("%d",&n);
    int fact=1;
    if(n>=0)
    {
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    }
    printf("The factorial is %d",fact);
    return 0;
}