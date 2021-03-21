#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 5
struct schedule{
	char destination[64];
	char number[16];
	char type[64];
	int departure;
	int travelTime;
};
int strToTime(char *str) {
	int time = 0;
	for (int i = 0; i < strlen(str); i++){
		if (str[i] != ':') time = (time * 10) + (str[i]-'0');
	}
	return time;
}

void main(void){
	struct schedule train[N];
	char type[64];
	char departure[10];
	char travelTime[10];

	for (int i = 0; i<N; i++){
		puts("Number: ");
		gets_s(train[i].number);
		puts("Destination:");
		gets_s(train[i].destination);
		puts("Type: ");
		gets_s(train[i].type);
		puts("Departure time: ");
		gets_s(departure);
		train[i].departure = strToTime(departure);
		puts("Travel time: ");
		gets_s(travelTime);
		train[i].travelTime = strToTime(travelTime);
	}
	_getch();
	system("CLS");
	puts("| N | Destination | Number |     Type      | Departure | Travel time");
	puts("---------------------------------------------------------------------");
	for (int i = 0; i < N; i++) {
		printf("|%3d|%13s|%8s|%15s|%11i|%12i|\n", i + 1, train[i].destination,
			train[i].number, train[i].type, train[i].departure, train[i].travelTime);
	}
	_getch();


	char from[10], till[10];

	puts("Train to Moscow from: ");
	gets_s(from);
	puts("till: ");
	gets_s(till);

	puts("| N | Destination | Number |     Type      | Departure | Travel time");
	puts("---------------------------------------------------------------------");
	for (int i = 0; i < N; i++) {
		if (!strcmp(train[i].destination, "Moscow") && train[i].departure >= strToTime(from) && train[i].departure < strToTime(till)) {
			printf("|%3d|%13s|%8s|%15s|%11i|%12i|\n", i + 1, train[i].destination,
				train[i].number, train[i].type, train[i].departure, train[i].travelTime);
		}
	}
	
	int z = 0;

	puts("Fastet train to Moscow: ");
	puts("Type of train: ");
	gets_s(type);
	for (int i = 1; i < N; i++) {
		if (!strcmp(train[i].destination, "Moscow") && !strcmp(train[i].type, type) && train[i].travelTime < train[z].travelTime) z = i;
	}

	puts("| N | Destination | Number |     Type      | Departure | Travel time");
	puts("---------------------------------------------------------------------");
	printf("|%3d|%13s|%8s|%15s|%11i|%12i|\n", 1, train[z].destination,
			train[z].number, train[z].type, train[z].departure, train[z].travelTime);

	_getch();
	return;
}