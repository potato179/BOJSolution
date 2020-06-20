#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int a=1; a<=n; a++){
        for(int b=n; b>=a; b--) printf("*");
        printf("\n");
    }
}