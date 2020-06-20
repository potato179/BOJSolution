#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int a=1; a<=n; a++){
        for(int s=a; s<n; s++) printf(" ");
		for(int b=1; b<=a*2-1; b++) printf("*");
        printf("\n");
    }
}