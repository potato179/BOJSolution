#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++) {
		for (int j = i-1; j > 0; j--)printf(" ");
		for (int k=2*input-i*2+1; k > 0; k--)printf("*");
		printf("\n");
	}
	for (int i = input-1; i > 0; i--) {
		for (int j = i-1; j > 0; j--)printf(" ");
		for (int k = 2*input-2*i+1; k > 0; k--)printf("*");
		printf("\n");
	}
}