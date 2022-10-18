#include<stdio.h>
int main() {
	float a = 0, b; 
	int d;
	while (1) {
		printf("\n輸入薪資代碼：");
		scanf_s("%d", &d);
		switch (d) {
		case 1: {
			printf("\n輸入週薪：");
			scanf_s("%f", &b);
			printf("\n週薪為：%0.2f",b);
			break;
		}
		case 2: {
			printf("\n輸入工作時間：");
			scanf_s("%f", &a);
			printf("\n輸入基本薪資：");
			scanf_s("%f", &b);
			if (a <= 40) {
				printf("\n薪水為：%0.2f", a*b);
			}
			else if (a > 40) {
				printf("\n薪水為：%0.2f", (b * 40 + (a - 40)*1.5*b));
			}
			break;
		}
		case 3: {
			printf("\n輸入銷售金額：");
			scanf_s("%f", &a);
			printf("\n薪水為：%0.2f", 250 + 0.057*a);
			break;
		}
		case 4: {
			printf("\n輸入生產件數：");
			scanf_s("%f", &a);
			printf("\n輸入每件的價錢：");
			scanf_s("%f", &b);
			printf("\n薪水為：%0.2f", a*b);
			break;
		}
		default:
			break;
		}
		if (d != 1 || d != 2 || d != 3 || d != 4) break;
}
}
