#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d %d", n/100*78, n-((n/100*20)/100*22));
}