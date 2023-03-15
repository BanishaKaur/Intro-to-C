#include<stdio.h>

int main(void)
{
    int n=0,num=0,sum=0;
    printf("Enter the set of numbers\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&num);
       sum+=num;

    }
    printf("The sum is %d",sum);
    double avg=sum/n;
    printf("The average is %lf",avg);
    return 0;

}