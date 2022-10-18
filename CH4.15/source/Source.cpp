#include<stdio.h>

int main() {

	float a = 0.005, k;
	printf("Year\tAmount on deposit\n");
	k = 5000;
	for (int i = 0; i < 15; i++) {
		k = k * (1.1 + (a * i));
		printf("%2d\t%.2f\n\r", i + 1, k);
	}
	return 0;
}