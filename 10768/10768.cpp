#include<stdio.h>
int main(){
    int m, d;
    scanf("%d %d", &m, &d);
    if(m == 1) printf("Before");
    else if(m == 2){
        if(d < 18) printf("Before");
        else if(d == 18) printf("Special");
        else printf("After");
    }
    else printf("After");
}