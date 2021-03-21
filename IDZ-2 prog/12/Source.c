#include <stdio.h>
#include <malloc.h>

void create_binary();
void read_binary();
void change_binary();

void main(){ 
	create_binary();
	read_binary();
	change_binary();
}

void create_binary() {
	FILE* f = fopen("binary", "wb");
	const int K = 5;
	double numbers[K] = { 3.5, 4.8, -2.56, -1.33, 2.18 };

	fwrite(&K, sizeof(int), 1, f);
	for (int i = 0; i < 5; i++) {
		fwrite(&numbers[i], sizeof(double), 1, f);
		printf("%f\n", numbers[i]);
	}
	puts("Data writeen sucessfully...\n");
	fclose(f);
}

void read_binary() {
	FILE* f = fopen("binary", "rb");
	if (f == NULL) {
		printf("Error opening file");
		return;
	}

	int K = 0;
	fread(&K, sizeof(int), 1, f);
	double *numbers = (double*)malloc(sizeof(double) * K);
	if (numbers == NULL) return;
	for (int i = 0; i < K; i++) {
		fread(&numbers[i], sizeof(double), 1, f);
	}

	for (int i = 0; i < K; i++) {
		printf("%f\n", numbers[i]);
	}
	
	puts("Data readed sucessfully...\n");

	fclose(f);
}

void change_binary() {
	FILE* f = fopen("binary", "r+b");
	if (f == NULL) {
		printf("Error opening file");
		return;
	}

	int K = 0;
	fread(&K, sizeof(int), 1, f);
	double *numbers = (double*)malloc(sizeof(double) * K);
	if (numbers == NULL) return;
	for (int i = 0; i < K; i++) {
		fread(&numbers[i], sizeof(double), 1, f);
	}

	double F = numbers[0];
	double L = numbers[K - 1];
	
	for (int i = 0; i < K; i++) {
		if (numbers[i] > 0) numbers[i] += F;
		else if (numbers[i] < 0) numbers[i] -= L;
	}

	for (int i = 0; i < K; i++) {
		printf("%f\n", numbers[i]);
	}

	fclose(f);
}
