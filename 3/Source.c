#include <stdio.h>
void main(void) {
	unsigned int N;

	printf_s("Vvedite N \n");
	scanf_s("%d", &N);

	unsigned short f = N / 100;
	unsigned short s = (N / 10) % 10;
	unsigned short t = N % 10;

	if ((f == s && s != t) ||  //���� ��� ����� ���������
		(f == t && t != s) ||
		(s == t && s != f)) {
		int tmp = f; //������ ������� ������ � ������ �����
		f = t;		 //
		t = tmp;	 //

	}
	else if (f != s && f != t && s != t) { //���� ��� ����� ������
		if (f < t) {
			if (f < s) f = 0;
			else s = 0;
		}
		else {
			if (t < s) t = 0;
			else s = 0;
		}
	}

	N = f * 100 + s * 10 + t; //�������� �����
	printf("%i", N); //�������
	return;
}