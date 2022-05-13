#include<stdio.h>
int main(){
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(b >= c) printf("-1");
    else printf("%lld", a/(c-b)+1);
}