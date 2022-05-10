#include<stdio.h>
int main(){
    int input;
    scanf("%d", &input);
    if(input%5 == 0) printf("%d", input/5);
    else printf("%d", input/5+1);
}