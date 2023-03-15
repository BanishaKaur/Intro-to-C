#include<stdio.h>

int main(void)
{   
    int n=0;
    int pos=0,neg=0,cnt=0;
    double avg=0.0,sum=0.0;
    printf("Enter an integer, the input ends if it is 0\n");
    while(1)
    {
       
       scanf("%d",&n);
       if(n==0)
       break;
       else{
       cnt++; 
       sum+=n;

       if(n<0)
        neg++;
        else
        pos++;

       }
    }
    
    printf("The number of positives is %d\n",pos);
    printf("The number of negatives is %d\n",neg);
    printf("the total is %lf\n",sum);
    avg=sum/cnt;
    printf("The average is %lf\n",avg);
    return 0;
}