#include <stdio.h>
#include <locale.h>
#define D 2.54
#define P 2.32
#define L 2.71
#define M 1.85
#define S 1.609
#define R 1.46
#define SR 7.47
#define G 7412.6

int dyms()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result;
	puts("������� ����� ������");

	scanf("%d", &dym);
	result = D * dym;
	printf("%d ������ - ��� %.1f ��\n", dym, result);
	printf("%d ��������� ������ - ��� %.1f ��\n", dym, dym * P);
	printf("%d �������������� ������ - ��� %.1f ��\n\n", dym, dym * L);
}

int mills()
{
	int mil;
	puts("������� ����� ����");

	scanf("%d", &mil);
	printf("%d ������� ���� - ��� %.1f ��\n", mil, mil * M);
	printf("%d ���������� ���� - ��� %.1f�� \n", mil, mil * S);
	printf("%d ������� ���� - ��� %.1f ��\n", mil, mil * R);
	printf("%d ������������ ���� - ��� %.1f ��\n", mil, mil * SR);
	printf("%d �������������� ���� - ��� %.1f ��\n", mil, mil * G);
}
int main()
{
	dyms();
	mills();

}