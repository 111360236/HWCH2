#include<stdio.h>
int main() {
	float a = 0,b;
	int c;
	while (1) {
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1) {
			printf("\nEnter interest rate:");
			scanf_s("%f", &b);
			printf("\nEnter term of the loan in days:");
			scanf_s("%d", &c);
			printf("\nThe interest charge is $%f\n",a*b*c/365);
		}
		else break;
	}
}