#include<stdio.h>
int main(){
	int n, c[5];
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &c[i]);
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (n == c[i]) cnt++;
	}
	printf("%d", cnt);
}