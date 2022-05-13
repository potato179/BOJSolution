#include<stdio.h>
int main(){
    int a, b, c, d, p, x, y;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
    x = a * p;
    if(c < p)
        y = b+((p-c)*d);
    else
        y = b;
    printf("%d", x < y ? x : y);
}