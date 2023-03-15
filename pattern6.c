#include <stdio.h>

int main() {
    int n=10;
    char ch[10]="*";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
         printf("%s",ch);
        for(int j=1;j<2*i-2;j++){
            printf(" ");
        }
        if(i!=1)
            printf("%s",ch);
        printf("\n");
    }
    return 0;
}