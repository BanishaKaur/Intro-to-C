#include<stdio.h>

int main(void)
{ int cnt=1;
    for(int i=100;i<=1000;i++)
    {
        if(i%5==0 && i%6==0)
        {
            if(cnt<=10)
            {
            cnt++;
           printf("%d\t",i);
            }
        
        else{
            printf("\n");
            printf("%d\t",i);
            cnt=2;
        }
        }

    }
    return 0;
}