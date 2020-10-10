#include <stdio.h>
void main(void) {
	int a, b;

	printf_s("Vvedite a b \n");
	scanf_s("%d %d", &a, &b);

	int i = 0;
	while (i<a*b) {
		if (i%a == 0 && i%b == 0) printf("%d\n", i);
		i++;
	}
	return;
}