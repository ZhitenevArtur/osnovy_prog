#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void) {
	char s[64];
	char numb[64] = {'\0'};
	printf("Type string: ");
	gets_s(s);

	for (int i = 0; i < strlen(s); i++){
		if (s[i] > 47 && s[i] < 58) {
			numb[strlen(numb)] = s[i];
		}
	}
	puts(numb);
	for (int i = 0; i < 1; i++){}
}