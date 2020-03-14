#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	int b = 64;
	int count = 0;
	while(a != 0){
		if(a >= b){
			a = a-b;
			count++;
		}
		b = b/2;
	}
	printf("%d", count);
}
