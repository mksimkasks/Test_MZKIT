#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main() {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	double y, x;
	const double a = 3.1;
	printf("\n\ta + cos^2(5,7x), \tx < a\ny = \ta + sin(b^2)^2 + ln(x), a <= x <= 8, a = 3, 1\n\t| a - cos(x) |,\t\tx > 8\n\n");
	printf("Введіть X: ");
	scanf_s("%lf", &x);
	if (x > 8) {
		y = fabs(a - cos(x));
		printf("\n%lf\n", y);
	}
	else if (a <= x && x <= 8.0) {
		y = a + pow(sin(pow(x, 2)), 2) + log(x);
		printf("\n%lf\n", y);
	}
	else {
		y = a + pow(cos(5.7 * x), 2);
		printf("\n%lf\n", y);
	}
	return 0;
}
