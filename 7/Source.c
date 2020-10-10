#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define EPS 1e-4

int factorial(int n) {
	int r;
	for (r = 1; n > 1; r *= (n--));
	return r;
}

void main(void) {
	double a = M_PI / 3;
	double s = 0;
	int n = 0;

	while (fabs(a)>EPS) {
		a = pow(-1, n) * pow(M_PI / 3, 2 * n + 1) / factorial(2 * n + 1);
		s += a;
		n++;
	}

	printf("%lf\n", s);
	printf("%lf", sin(M_PI / 3));
	return;
}