#include<stdio.h>
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < 2*i-1; k = k + 1) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 3; i > 0; i--) {
		for (int j = 5; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k = k + 1) {
			printf("*");
		}
		printf("\n");
	}
}