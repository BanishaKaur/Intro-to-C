#include<stdio.h>

int main(void)
{

    int n=0,fact=1;
    scanf("%d",&n);
    a:if(n!=0 && n>0)
    {
        fact=fact*n;
        n--;
        goto a;
    }
    printf("%d\n",fact);
    return 0;
}