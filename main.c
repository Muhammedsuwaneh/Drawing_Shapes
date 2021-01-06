#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define max 10

void drawLine();
void drawParabola();
void drawCircle();

int main() {

	int choice;

	printf("Which shape would you like to draw ?\n");
	printf("1. Line\n");
	printf("2. Parabola\n");
	printf("3. Circle\n");
	printf("4. Exit\n");
	printf("Choose: ");
	scanf_s("%d", &choice);

	if (choice == 1)
		drawLine();
	else if (choice == 2)
		drawParabola();
	else if (choice == 3)
		drawCircle();
	else if (choice == 4)
		printf("Program terminated\n");
	else
		printf("Option does not exist");

	printf("\n\n");
	return 0;
}

void drawLine() {

	int a, b;
	printf("Enter a: ");
	scanf_s("%d", &a);	
	
	printf("Enter b: ");
	scanf_s("%d", &b);

	for (int j = max; j > -max; j--) {

		for (int i = -max; i < max; i++) {

			int y = a * i + b;

			if (i == 0)
				printf("|");
			if (j == 0)
				printf("-");
			else if (j == y)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void drawParabola() {

	int a, b, c;
	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	printf("Enter c: ");
	scanf_s("%d", &c);

	for (int j = max; j > -max; j--) {

		for (int i = -max; i < max; i++) {

			int y = a*pow(i, 2) + b*i + c;

			if (i == 0)
				printf("|");
			if (j == 0)
				printf("-");
			else if (j == y)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void drawCircle() {

	int a, b, r;
	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	printf("Enter r: ");
	scanf_s("%d", &r);


	for (int j = max; j > -max; j--) {

		for (int i = -max; i < max; i++) {

			int val = pow((i - a), 2) + pow((j - b), 2);

			if (i == 0)
				printf("|");
			if (j == 0)
				printf("-");
			else if (val == pow(r, 2))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}