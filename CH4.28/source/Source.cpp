#include<stdio.h>
int main() {
	float a = 0, b; 
	int d;
	while (1) {
		printf("\n��J�~��N�X�G");
		scanf_s("%d", &d);
		switch (d) {
		case 1: {
			printf("\n��J�g�~�G");
			scanf_s("%f", &b);
			printf("\n�g�~���G%0.2f",b);
			break;
		}
		case 2: {
			printf("\n��J�u�@�ɶ��G");
			scanf_s("%f", &a);
			printf("\n��J���~��G");
			scanf_s("%f", &b);
			if (a <= 40) {
				printf("\n�~�����G%0.2f", a*b);
			}
			else if (a > 40) {
				printf("\n�~�����G%0.2f", (b * 40 + (a - 40)*1.5*b));
			}
			break;
		}
		case 3: {
			printf("\n��J�P����B�G");
			scanf_s("%f", &a);
			printf("\n�~�����G%0.2f", 250 + 0.057*a);
			break;
		}
		case 4: {
			printf("\n��J�Ͳ���ơG");
			scanf_s("%f", &a);
			printf("\n��J�C�󪺻����G");
			scanf_s("%f", &b);
			printf("\n�~�����G%0.2f", a*b);
			break;
		}
		default:
			break;
		}
		if (d != 1 || d != 2 || d != 3 || d != 4) break;
}
}
