#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int b=1; b<=9; b++) printf("%d * %d = %d", a, b, a*b);
}