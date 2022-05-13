#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c != 180) return !printf("Error");
    else if(a == 60 && b == 60) return !printf("Equilateral");
    else if(a == b || b == c || c == a) return !printf("Isosceles");
    else printf("Scalene");
}