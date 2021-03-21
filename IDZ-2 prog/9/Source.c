#include <stdio.h>
#include <string.h>
#define DELIM " \n"
int main(){
	FILE *fin, *fout;
	fin = fopen("input.txt", "r");
	fout = fopen("output.txt", "w");

	char s[128], w[30], *p;
	while (fgets(s, 128, fin)) {
		for (p = strtok(s, DELIM); p; p = strtok(NULL, DELIM)) {
			strcpy(w, p);
			if (w[0] == 'a')
				fprintf(fout, "%s ", w);
		}
		fprintf(fout, "\n");
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
