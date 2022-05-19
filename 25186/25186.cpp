#include<stdio.h>
int main(){
    long long a, b = -3000, n, ifhappy = 0;
    scanf("%lld", &n);
    for(int i = 0; i < n; i++){
        scanf("%lld", &a);
        if(a == b) ifhappy = 1;
        b = a;
    }
    printf("%s", ifhappy == 0 ? "Happy" : "Unhappy");
}