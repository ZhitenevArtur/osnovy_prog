#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void main(){
	FILE* input = fopen("input.txt", "r");
	FILE* output = fopen("output.txt", "w");
	int number, x, y;
	char ch;
	bool i = 0;
	while(1){
		fscanf(input, "%d%c", &number, &ch);
		printf("%d%c", number, ch);

		if (!i) {
			x = number;
			i = true;
		}
		if (ch == '\n' || feof(input)) {
			y = number;
			fprintf(output, "%d\n", x + y, "\n");
			i = false;
		}
		if (feof(input)) break;
	}
	fclose(input);
	fclose(output);
	puts("\n");
	system("pause");
	return;
}
