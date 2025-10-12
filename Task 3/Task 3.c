#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	float a;
	float b;
	puts(" введите два числа:");
	scanf("%f %f", &a, &b);

	printf("__________________________________________\n");
	printf("| %s | %s | %s |\n", "   a * b   ","   a + b   ","   a - b   ");
	printf("__________________________________________\n");
	printf("| %2.2f * %2.2f | %2.2f + %2.2f | %2.2f - %2.2f |\n", a, b, a, b, a, b);
	printf("__________________________________________\n");
	printf("| %9.2f   | %9.2f   | %9.2f   |\n", a * b, a + b, a - b);
	printf("__________________________________________\n");



}