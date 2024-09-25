#include <stdio.h>
#include <locale.h>
#include <math.h>
#define	_USE_MATH_DEFINES

int main()

{
	setlocale(LC_ALL, "RUS");

	float x, y, step;
	char c;

	printf("Введите пример: \n");
	scanf("%f%c%f", &x, &c, &y);

	switch (c)

	{
	case '+':
		printf("= %.2f", x + y);

		break;

	case '-':
		printf("= %.2f", x - y);

		break;

	case '*':
		printf("= %.2f", x * y);

		break;

	case '/':
		printf("= %.2f", x / y);

		break;

	case '^':
		printf("= %.2f", pow(x, y));

		break;

	case '%':
		printf("= %.2f", fmod(x, y));

		break;

	default:
		printf("Решение невозможно");
		



	}

	

	













}
