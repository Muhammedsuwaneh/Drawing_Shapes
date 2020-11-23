#include <stdlib.h>
#include <stdio.h>
#define max 20

char displayMenu();
void drawLine();
void drawCircle();
void drawParabola();

int main() {

	char choice;

	choice = displayMenu();

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

	char c = '+';

	// draw line
	printf("=================================================\n");
	printf("Graph of y = %dx%c%d\n\n", a, (b > 0) ? c : ' ', b);
	printf("=================================================\n");

	int fx;

	for (int y = max; y >= -max; y--) {

		for (int x = -max; x <= max; x++) {

			// obtain y = f(x) 
			fx = a * x + b;

			// fix x and y characters
			if (y == max && x == 0)
				printf("y");

			else if (x == max && y == 0)
				printf("x");

			// fix vertical axis
			else if (x == 0)
				printf("|");

			// fix horizontal axis
			else if (y == 0)
				printf("-");

			// fix points
			else if (y == fx)
				printf("*");

			// leave spaces
			else
				printf(" ");
		}

		printf("\n");
	}
}

void drawParabola() {

	// get inputs

	// draw parabola 
}

void drawCircle() {

	// get inputs
	

	// draw circle
}
