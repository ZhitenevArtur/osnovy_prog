#include <stdio.h>
#include <stdlib.h>
#define N 7
void main(void) {
	int M[N][N], diagA = 0, diagB = 0;

	srand(42);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			M[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%i", M[i][j]);
		}
		putchar('\n');
	}

	for (int i = 0; i < N; i++) {
		diagA += M[i][i];
	}

	for (int i = 0, j = N - 1; i < N; i++, j--) {
		diagB += M[i][j];
	}

	printf("Основная диагональ: %i", diagA);
	printf("Побочн6ая диагональ: %i", diagB);
}