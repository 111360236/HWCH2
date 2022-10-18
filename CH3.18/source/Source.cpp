#include<stdio.h>
int main() {
	float a=0;
	while (1) {
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1) {
			printf("Salary is:%0.2f\n",a*0.09+200);
		}
		else break;
	}
}