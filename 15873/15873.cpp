#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a/100 == 0){
        printf("%d", a/10+a%10);
    }
    else if(a/1000 == 0){
        if(a%10 == 0) printf("%d", a/100+a%100);
        else printf("%d", a/10+a%10);
    }
    else{
        if(a%10 == 0) printf("%d", a/100+a%100);
        else printf("%d", a/10+a%10);
    }
}