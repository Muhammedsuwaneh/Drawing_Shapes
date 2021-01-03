#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define max 10

char graphMat[max][max];

void formatMatrix();
char displayMenu();
void drawLine();
void drawCircle();
void drawParabola();

int main() {

	char choice;

	choice = displayMenu();

	formatMatrix();

	switch (choice) {

	case 1:
		drawLine();
		break;
	case 2:
		drawParabola();
		break;
	case 3:
		drawCircle();
		break;
	case 4:
		printf("Program successfully terminated");
		exit(0);
	default:
		printf("Option does not exist");
		break;
	}

	printf("\n\n");
	return 0;
}

void formatMatrix() {

	for (int y = max; y > -max; y--) {
		for (int x = -max; x < max; x++) {
			graphMat[x][y] = ' ';
		}
	}

	for (int x = -max; x < max; x++) {
		graphMat[x][0] = '-';
	}

	for (int y = max; y > -max; y--) {
		graphMat[0][y] = '|';
	}
}

char displayMenu() {

	int choice;

	printf("Which shape would you like to draw\n");

	printf("=================================================\n");
	printf("1.Line\n");
	printf("2.Parabola\n");
	printf("3.Circle\n");
	printf("4.Exit..");
	printf("\n=================================================\n");
	printf("Choice: ");
	scanf_s("%d", &choice);

	return choice;
}

void drawLine() {

	// get inputs 
	printf("=================================================\n");
	printf("INPUTS\n");
	printf("=================================================\n");
	int a, b;
	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	for (int y = max; y > -max; y--) {
		for (int x = -max; x < max; x++) {
			
			int fx = a * x + b;

			if(fx == y && fx != NULL)
				graphMat[y][x] = '*';
		}
	}

	for (int y = max; y > -max; y--) {
		for (int x = -max; x < max; x++) {
			printf("%c", graphMat[x][y]);
		}
		printf("\n");
	}
}

void drawParabola() {}

void drawCircle() {}
