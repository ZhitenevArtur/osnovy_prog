#include <stdio.h>
#include <stdlib.h>
#define N 6
#define K 7
void main(void) {
	int M[N][K];

	srand(45);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			M[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			printf("%i", M[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K - 1; j++) {
			for (int z = 0; z < K - j - 1; z++) {
				if (M[i][z] < M[i][z + 1]) {

					int tmp = M[i][z];
					M[i][z] = M[i][z + 1];
					M[i][z + 1] = tmp;
				}
			}
		}
	}
	putchar('\n');

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			printf("%i", M[i][j]);
		}
		putchar('\n');
	}

}