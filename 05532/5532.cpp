#include<stdio.h>
int main(){
    int l, a, b, c, d;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    if(a/c+1 > b/d+1){
        if(a%c == 0) return !printf("%d", l-(a/c));
        printf("%d", l-(a/c+1));
    }
    else{
        if(b%d == 0) return !printf("%d", l-(b/d));
        printf("%d", l-(b/d+1));
    }
}