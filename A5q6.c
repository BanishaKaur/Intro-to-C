#include<stdio.h>

int main(void)
{
    int n=0;
    double recpsum=0.0,num=0.0;
    printf("Enter the total no. of numbers\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter the numbers one by one whose harmonic mean is to be found\n");
        scanf("%lf",&num);
        recpsum=recpsum+(1/num);

    }
    double hm=0.0;
    hm=n/recpsum;
    printf("The harmonic mean is %lf",hm);
    return 0;
}
