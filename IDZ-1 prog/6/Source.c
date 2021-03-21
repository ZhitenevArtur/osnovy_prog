#include <stdio.h>
void main(void) {
	int p;
	int k = 0;

	printf_s("Vvedite p \n");
	scanf_s("%d", &p);
	
	while (true){
		int z = 1;
		for (int i = 1; i <= k; i++){
			z *= i;
		}
		if (z == p) break;
		else k++;
	}
	printf("%d", k);
	return;
}