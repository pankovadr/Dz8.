#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
    int n;
    double res = 1.0;
    printf("Введите значение n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Ошибка: n должно быть целым положительным числом.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        res *= (1.0 - 1.0 / (2.0 * i));
    }
    printf("Результат произведения для n = %d: %lf\n", n, res);
    return 0;
}
