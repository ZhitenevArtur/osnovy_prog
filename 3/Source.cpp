#include <stdio.h>
void main(void) {
	int N;

	printf_s("Vvedite N \n");
	scanf_s("%d", &N);

	int f = N / 100;
	int s = (N / 10) % 10;
	int t = N % 10;

	if ((f == s && s != t) ||  //если две цифры совпадают
		(f == t && t != s) ||
		(s == t && s != f)){
		int tmp = f; //меняем местами первую и вторую цифры
		f = t;		 //
		t = tmp;	 //

	}
	else if (f != s && f != t && s != t) { //если все цифры разные
		if (f < t) {
			if (f < s) f = 0;
			else s = 0;
		}
		else {
			if (t < s) t = 0;
			else s = 0;
		}
	}

	N = f * 100 + s * 10 + t; //собираем число
	printf("%i", N); //выводим
	return;
}