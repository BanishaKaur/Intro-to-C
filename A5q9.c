#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
    double x=0.0,n=0.0;
    printf("Enter the values of x and n\n");
    scanf("%lf%lf",&x,&n);
    int fact=1;
    double power=0;
    double res=0;
    power=pow(x,n);
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    res=power/fact;
    printf("The result is %lf",res);
    return 0;
}