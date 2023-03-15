#include <stdio.h>

int main()
{
    double principal=0;
    int mnth=0;
    double rate=0.0;
    printf("Enter value of principal :");
    scanf("%lf",&principal);
    printf("Enter value of annual interest rate :");
    scanf("%lf",&rate);
     printf("Enter total months :");
    scanf("%d",&mnth);
    rate/=12;
    rate/=100;
    double amt=principal;
    int n=mnth;
    while(mnth-->0){
        if(amt==principal)
        {
            principal=(principal)*(1+rate);
        }
        else
        {
        principal=(amt+principal)*(1+rate);
        }
    }
    printf("After %d months the principal %lf would be %lf",n,amt,principal);
    return 0;
}