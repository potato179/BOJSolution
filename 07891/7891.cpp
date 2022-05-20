#include<stdio.h>
int main(){
    int input;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a+b);
    }
}