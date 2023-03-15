#include<stdio.h>

int main(void)
{
    int n=0;
    double marks=0.0;
    printf("Enter the number of students \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       printf("Enter the marks of the respective student\n");
       scanf("%lf",&marks);
       if(marks>=0 && marks<=100)
       {
          if(marks>=40)
          printf("PASS\n");
          else
          printf("FAIL\n");
       }
       else
       { 
        printf("Enter a valid number between 0 and 100");

       }
    }
    return 0;
}