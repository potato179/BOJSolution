#include<stdio.h>
#include<stdlib.h>
int main(){
    int l, p, tot;
    int n1, n2, n3, n4, n5;
    scanf("%d %d", &l, &p);
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    tot = l*p;
    printf("%d %d %d %d %d", n1-tot, n2-tot, n3-tot, n4-tot, n5-tot);
}