#include<stdio.h>
int main(){
    int a1, a2, a3, a4, b1, b2, b3, b4;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
    printf("%d", (a1+a2+a3+a4 > b1+b2+b3+b4) ? a1+a2+a3+a4 : b1+b2+b3+b4);
}