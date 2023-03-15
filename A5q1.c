#include<stdio.h>
#include<math.h>

int main(void)
{
    int N=0;
    int power=0;
    printf("Enter a number\n");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        printf("%d\t",i); power=pow(2,i);  printf("%d\n",power);
        
    }
return 0;
}