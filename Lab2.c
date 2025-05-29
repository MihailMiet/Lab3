#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double num1, num2, dif;
	scanf_s("%lf", &dif);
	printf("Граничное значение: %lf\n", dif);
	printf("Числа     Сумма    Среднее арифметическое\n");
	do{
		scanf_s("%lf", &num1);
		scanf_s("%lf", &num2);
		if (num1 > 0 && num2 > 0) {
			printf("%15.3lf %10.3lf\n", num1 + num2, (num1 + num2) / 2);
		}
		else { printf("ошибка ввода\n"); }
	} while (abs(num1 - num2 < dif));
}