#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++) {
		for (int j = i; j > 0; j--) printf("*");
		for (int k = 2*input-2*i; k > 0; k--) printf(" ");
		for (int l = i; l > 0; l--) printf("*");
		printf("\n");
	}
	for (int i = input-1; i > 0; i--) {
		for (int j = i; j > 0; j--)printf("*");
		for (int k = 2*input-2*i; k > 0; k--)printf(" ");
		for (int l = i; l > 0; l--)printf("*");
		printf("\n");
	}
}