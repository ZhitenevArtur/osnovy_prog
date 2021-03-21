#include <stdio.h>
void main(void) {
	const int N = 26, Q = 25;
	int M[N], A[Q];
	int k = -1;
	for (int i = 0; i<N; i++){
		printf("M[%d] = ", i+1);
		scanf_s("%d", &M[i]);
	}
	for (int i = 0; i < N; i++){
		if (M[i] > 0) {
			k = i;
			break;
		}
	}
	for (int j = 0, i = 0; j < Q; j++, i++){
		if (i == k) i++;
		A[j] = M[i];
	}
	for (int i = 0; i<Q; i++) {
		printf("%d", A[i]);
	}
	return;
}