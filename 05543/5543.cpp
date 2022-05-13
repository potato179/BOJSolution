#include<stdio.h>
int main(){
    int pasta1, pasta2, pasta3, juice1, juice2, pastamin, juicemin;
    scanf("%d %d %d %d %d", &pasta1, &pasta2, &pasta3, &juice1, &juice2);

    if(pasta1 <= pasta2 && pasta1 <= pasta3) pastamin = pasta1;
    else if(pasta2 <= pasta3 && pasta2 <= pasta1) pastamin = pasta2;
    else if(pasta3 <= pasta2 && pasta3 <= pasta1) pastamin = pasta3;

    if(juice1 < juice2) juicemin = juice1;
    else juicemin = juice2;

    printf("%d", pastamin + juicemin -50);
}