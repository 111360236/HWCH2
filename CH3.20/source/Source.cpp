#include<stdio.h>
int main() {
	float a = 0, b;
	while (1) {
		printf("\nEnter # of hours worked(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1) {
			printf("\nEnter hourly rate of the worker($00.00):");
			scanf_s("%f", &b);
			if (a <= 40) {
				printf("\nSalary is $%0.2f",a*b);
			}
			else if(a>40) {
				printf("\nSalary is $%0.2f", (b*40+(a-40)*1.5*b));
			}
		}
		else break;
	}
}