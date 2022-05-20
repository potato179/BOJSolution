#include<stdio.h>
int main(){
    int input, a, b;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        scanf("%d %d", &a, &b);
        if(a < b) printf("NO BRAINS\n");
        else printf("MMM BRAINS\n");
    }
}