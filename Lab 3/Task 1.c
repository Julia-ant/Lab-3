#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	int num2;
	puts("введите числа\n");
	scanf("%d %d", &num, &num2);
	printf("Введены числа %d, %d \n", num, num2);

	printf("Сумма %d\n", num + num2);
	printf("Разность %d\n", num - num2);
	printf("Произведение %d\n", num * num2);
	printf("Частное %d Остаток от деления %d\n", num2 / num, num2 % num);

	return 0;
}