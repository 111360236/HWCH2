#include<stdio.h>

int main() {
	printf("(A)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (int i = 0; i <= 10; i++) {
		for (int j = 10; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 10; k > i; k--) {
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (int i = 0; i <= 10; i++) {
		for (int j = 10; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
}