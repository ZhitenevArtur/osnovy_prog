#include <stdio.h>
#include <math.h>
void main(void) {
	int Q[10];
	int X;
	int z = 0;

	for (int i = 0; i<5; i++){
		printf("Q[%d] = ", i+1);
		scanf_s("%d", &Q[i]);
	}
	printf("X = ");
	scanf_s("%d", &X);

	for (int i = 0; i<5; i++) {
		if (Q[i] == X) {
			z = Q[i];
			break;
		}
		if ((X - z) > (Q[i] - z)) {
			z = Q[i];
		}
	}
	printf("Z = %d", z);
	return;
}