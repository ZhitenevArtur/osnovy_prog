#include <stdio.h>
void main(void) {
	int Q[18];
	int fNeg = -1, lNeg = -1;

	for (int i = 0; i<18; i++){
		printf("Q[%d] = ", i+1);
		scanf_s("%d", &Q[i]);
	}
	
	for (int i = 0; i<18; i++) {
		if (Q[i] < 0 && fNeg<0) fNeg = i;
		if (Q[i] < 0) lNeg = i;
	}
	
	int temp = Q[fNeg];
	Q[fNeg] = Q[lNeg];
	Q[lNeg] = temp;

	for (int i = 0; i<5; i++) {
		printf("%d",Q[i]);
	}
	return;
}