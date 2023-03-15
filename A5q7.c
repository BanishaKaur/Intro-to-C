#include<stdio.h>

int main(void)
{
    int n=0;
    int sum=0;
    printf("Enter the number of terms whose series sum has to be found\n");
    scanf("%d",&n);
    int cnt=0;
    if(n>=1)
    {
        int i=0;
        while(cnt!=n)
        {
            
            if((i+1)%2!=0)
            {
                ++cnt;
                if(cnt%2==0)
                sum=sum-(i+1);
                else
                sum=sum+(i+1);
            }
            i++;
        }
    }
    printf("%d",sum);
    return 0;
}