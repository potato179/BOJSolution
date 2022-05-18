#include<stdio.h>
int main(){
    long long a, sum = 0, cnt = 0;
    scanf("%lld", &a);
    while(sum < a){
        cnt++;
        sum += cnt;
    }
    if(sum > a) printf("%lld", cnt-1);
    else printf("%lld", cnt);
}