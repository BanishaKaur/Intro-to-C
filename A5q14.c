 #include<stdio.h>

 int main(void)
 {
    int n=0,a=0,b=1,c=0;
    printf("Enter the  number of terms\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d\t",a);
        printf("%d\t",b);
    }
    else{
         printf("%d\t",a);
        printf("%d\t",b);
    while(n-2!=0)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        n--;

    }
    }
    return 0;
 } 
 