#include <stdio.h>
int main(){
	int a, b, c = 1,count = 0, s = 0;
	scanf("%d %d", &a, &b);
	for(int i=1; i<=b; i++){
		count++;
		if(i >= a) s += c;
		
		if(count == c){
			c++;
			count = 0;
		}	
	}
	printf("%d", s);
}