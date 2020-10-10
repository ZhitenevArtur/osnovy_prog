#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define EPS 1e-6
void main(void) {
	double x;
	printf("Vvedite x\n");
	scanf_s("%lf", &x);
	
	double s = 0;
	double a = x;
	int n = 1;

	if (x < -1 || x > 1) {
		printf("x is out of range");
	}
	else {
		while (fabs(a) > EPS){
			a = pow(-1, n - 1)*pow(x, n) / n;
			s += a;
			n++;
		}
		printf("%lf\n", s);
		printf("%lf\n", log(1+x));
	}
	return;
}