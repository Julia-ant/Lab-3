#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	int num2;
	puts("������� �����\n");
	scanf("%d %d", &num, &num2);
	printf("������� ����� %d, %d \n", num, num2);

	printf("����� %d\n", num + num2);
	printf("�������� %d\n", num - num2);
	printf("������������ %d\n", num * num2);
	printf("������� %d ������� �� ������� %d\n", num2 / num, num2 % num);

	return 0;
}