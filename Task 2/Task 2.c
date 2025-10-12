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
	puts("Введите число дюймов");

	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов - это %.1f см\n", dym, result);
	printf("%d испанских дюймов - это %.1f см\n", dym, dym * P);
	printf("%d старолитовских дюймов - это %.1f см\n\n", dym, dym * L);
}

int mills()
{
	int mil;
	puts("Введите число миль");

	scanf("%d", &mil);
	printf("%d морских миль - это %.1f км\n", mil, mil * M);
	printf("%d сухопутных миль - это %.1fкм \n", mil, mil * S);
	printf("%d римских миль - это %.1f км\n", mil, mil * R);
	printf("%d старорусских миль - это %.1f км\n", mil, mil * SR);
	printf("%d географических миль - это %.1f км\n", mil, mil * G);
}
int main()
{
	dyms();
	mills();

}
