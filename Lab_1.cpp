#include <stdio.h>
#include <math.h>
#include <locale.h>
double y(double a, double b, double x, double t) {
	return log(a + b) + (pow(a, 2) / (a + t));
}
double a(double b, double x, double t) {
	return log10(fabs(t * x + pow(b, 2)));
}
double t(double b, double x) {
	return x * pow(b, 2) + sqrt(x);
}
int main() {
	setlocale(LC_ALL, "Ru");
	const double x = 5.2;
	double b;
	printf("Введіть значення b = ");
	scanf_s("%lf", &b);
	printf("\n");
	double res_t = t(b, x);
	double res_a = a(b, x, res_t);
	double res_y = y(res_a, b, x, res_t);
	printf("y = %f\n", res_y);
	printf("a = %f\n", res_a);
	printf("t = %f\n", res_t);
	return 0;
}