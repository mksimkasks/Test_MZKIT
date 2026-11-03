#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);

	int k = 1; float sum = 0.0, error;

	printf("Введіть значення похибки: ");
	scanf_s("%f", &error);

	printf("———————————————————————————————————");
	while (1) {
		float y = (cos(2 * k - 1)) / (pow(2 * k - 1, 2));
		if (fabs(y) < error) {
			printf("\n\n    y = %9.6f < %.6f\n", y, error);
			break;
		}
		sum += y;
		printf("\n%2d. y = %9.6f | СУМА = %.6f", k, y, sum);
		k++;
	}
	printf("———————————————————————————————————\n");
}
