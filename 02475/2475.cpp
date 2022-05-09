#include<stdio.h>
int main(){
    int a, b, c, d, e, sum = 0;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    sum += a*a+b*b+c*c+d*d+e*e;
    printf("%d", sum%10);
}