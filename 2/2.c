#include <stdio.h>
#include <math.h>

void main(void) {
	double B, x, a, b;

	printf_s("Vvedite argumenty x a b \n");
	scanf_s("%lf %lf %lf", &x, &a, &b);

	double u = a*x*pow(sin(2*x),2) + exp(-2 * x)*(x + b);
	if (u<0) printf("Argument ne prinadlezhit OOF.\nPodkorennoe vyrazhenie ne mozhet byt' men'she nulya");
	else {
		double d = x + sqrt(pow(a, 2) + pow(b, 2));
		if (!d) printf("Argument ne prinadlezhit OOF.\nZnamenatel' drobi ne mozhet byt' raven nulyu");
		else {
			B = sqrt(u) / d;
			printf("B = %lf", B);
		}
	}
	return;
}