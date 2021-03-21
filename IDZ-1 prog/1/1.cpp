#include <stdio.h>
#include <math.h>
void main(void) {
	double s, t;
	double f = 0;
	printf("Vvedite s t\n");
	scanf_s("%lf %lf", &s, &t);

	(s > 4) ? (f = (3 * t) - 1) : (s <= 4 && t != 0 ? (f = sqrt(fabs(t - s))) : f = s + 2);
	printf("f = %f", f);
	getchar();
	getchar();
	return;
}