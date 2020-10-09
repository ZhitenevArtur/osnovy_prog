#include <stdio.h>

void main(void) {
	int N;
	double x = 1;

	printf_s("Vvedite argumenty N \n");
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		x *= 1 + 1 / (double)(i*i);
	}
	printf("X = %lf", x);
}