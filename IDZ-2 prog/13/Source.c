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
	const int K = 3, M = 5;
	int numbers[K][M] = { 1, 1, 1, 1, 5, 6, 7, 8, 9, 10, 11, 19, 13, 13, 15 };

	fwrite(&K, sizeof(int), 1, f);
	fwrite(&M, sizeof(int), 1, f);

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < M; j++){
			fwrite(&numbers[i][j], sizeof(int), 1, f);
		}
	}
	puts("Data written sucessfully...\n");
	fclose(f);
}

void read_binary() {
	FILE* f = fopen("binary", "rb");
	if (f == NULL) {
		printf("Error opening file");
		return;
	}

	int K = 0, M = 0;
	fread(&K, sizeof(int), 1, f);
	fread(&M, sizeof(int), 1, f);

	int** numbers = (int**)malloc(K* sizeof(int*));
	for (int i = 0; i < K; ++i) numbers[i] = (int*)malloc(M * sizeof(int));
	if (numbers == NULL) return;
	
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < M; j++) {
			fread(&numbers[i][j], sizeof(int), 1, f);
		}
	}

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < M; j++){
			printf("%3d", numbers[i][j]);
		}
		puts("\n");
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

	int K = 0, M = 0;
	fread(&K, sizeof(int), 1, f);
	fread(&M, sizeof(int), 1, f);

	int** numbers = (int**)malloc(K * sizeof(int*));
	for (int i = 0; i < K; ++i) numbers[i] = (int*)malloc(M * sizeof(int));
	if (numbers == NULL) return;

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < M; j++) {
			fread(&numbers[i][j], sizeof(int), 1, f);
		}
	}

	for (int i = 0; i < K; i++) {
		bool q = 0;
		for (int j = 0; j < M; j++) {
			if (!(numbers[i][j] % 2)) q = true;
		}
		if (!q) {
			for (int j = 0; j < M; j++) {
				printf("%3d", numbers[i][j]);
			}
			puts("\n");
		}
	}
	fclose(f);
}
