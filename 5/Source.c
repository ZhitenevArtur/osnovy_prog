#include <stdio.h>
void main(void) {
	int a, b;

	printf_s("Vvedite a b \n");
	scanf_s("%d %d", &a, &b);

	for (int i = 0; i < a*b; i++){
		if (i%a == 0 && i%b == 0) printf("%d\n", i);
	}
	return;
}