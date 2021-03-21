#include<stdio.h>
#define N 5
#define M 4

void main(){
	FILE *input, *output;
	int array[N][M];
	int positive = 0, negative = 0, null = 0, total = 0;
	int max[3] = { 0,0,0 }, min[3] = { 0,0,0 };
	double average = 0;
	if ((input = fopen("input.txt", "r")) == NULL){
		printf("\nREAD ERROR!\n");
		return;
	}

	for (int i = 0; i<N; i++){
		for (int j = 0; j<4; j++){
			fscanf(input, "%d", &array[i][j]);
			printf("%d ", array[i][j]);
			if (array[i][j] > 0) positive++;
			else if (array[i][j] < 0) negative++;
			else if (array[i][j] == 0) null++;

			if (array[i][j] > max[0]) {
				max[0] = array[i][j];
				max[1] = i; max[2] = j;
			}
			if (array[i][j] < min[0]) {
				min[0] = array[i][j];
				min[1] = i; min[2] = j;
			}
			total++;
			average += array[i][j];
		}
		printf("\n");
	}
	average = average / total;
	output = fopen("output.txt", "w");
	fprintf(output, "Positive = %d \nNegative = %d \nNull = %d \nAverage = %f \nMaximum = %d[%d][%d] \nMinimum = %d[%d][%d]", positive, negative, null, average, max[0], max[1], max[2], min[0], min[1], min[2]);
	fclose(input);
	fclose(output);
	return;
}