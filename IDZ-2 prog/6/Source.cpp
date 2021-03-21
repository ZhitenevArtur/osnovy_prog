#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void) {
	char s[64];
	printf("Type string: ");
	gets_s(s);

	for (int i = 0; i < strlen(s); i++){
		if (s[i] > 64 && s[i] < 91 || s[i]>96 && s[i]<123) {
			if (s[i] == 90) s[i] = 65;
			else if (s[i] == 122) s[i] = 97;
			else s[i]++;
		}
	}
	puts(s);

}