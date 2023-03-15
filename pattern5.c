#include <stdio.h>

int main() {
    // Write C code here
    int n=10;
    char ch[10]="*  *";
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        printf("%s",ch);
        printf("\n");
    }
    return 0;
}