#include <stdio.h>
#include <math.h>
void main(void) {
	int a, b;
	printf("Vvedite a b\n");
	scanf_s("%d %d", &a, &b);
	int p = a + 1;
	if (a > b) printf("a should be < b");
	else {
		for (p ; p < b; p++){ //перебор значение от a до b
			for (int i = 2; i <= p; i++){ //проверка на простоту
				if (i == p) printf("%i ", p);
				if (p%i == 0) break;
				}
		}
	}
	return;
}