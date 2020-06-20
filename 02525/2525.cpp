#include<stdio.h>
int main(){
    int h, m, i;
    scanf("%d %d", &h, &m);
    scanf("%d", &i);
    m = m+i;
    h = h+(m/60);
    m = m%60;
    h = h%24;
    printf("%d %d", h, m);
}