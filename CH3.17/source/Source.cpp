#include<stdio.h>

int main() {
	float a=0, b, c, d, e;
	while (1) {
		printf("\nEnter account number(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1) break;
		else {
			printf("Enter begining balance:");
			scanf_s("%f", &b);;
			printf("Enter total charges:");
			scanf_s("%f", &c);
			printf("Enter total credits:");
			scanf_s("%f", &d);
			printf("Enter credit limit:");
			scanf_s("%f", &e);
			printf("Account:%.2f\nCredit limit:%0.2f\nBalance:%0.2f", a, e, b + d);
			if ((b + d) > e) printf("\nCredit Limit Exceeded.\n");
			else printf("\n");
		}
	}
	return 0;
	
}