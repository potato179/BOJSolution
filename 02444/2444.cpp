#include <stdio.h>
int main(){
    int input, i, j;
    scanf("%d", &input);
    
    for(i = 1; i <= input; i++){
        for(j = input-i; j > 0; j--) printf(" ");
        for(j = 0; j < 2*i-1; j++) printf("*");
        printf("\n");
    }
    for(i = input-1; i > 0; i--){
        for(j = input-i; j > 0; j--) printf(" ");
        for(j = 0; j < 2*i-1; j++) printf("*");
        printf("\n");
    }
}