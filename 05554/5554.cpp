#include<stdio.h>
int main(){
    int a1, a2, a3, a4;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    printf("%d\n%d", (a1+a2+a3+a4)/60, (a1+a2+a3+a4)%60);
}