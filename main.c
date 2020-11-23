#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define max 30

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

	char op = ' ', op_1 = ' ';

	(a > 0) ? op = '+' : ' ';
	(b > 0) ? op_1 =  '+' : ' ';

	printf("Graph of: %c%dx%c%d\n\n", op, a, op_1, b);

	int fx;

	// plot line
	for (int y = max; y >= -max; y--) {

		for (int x = -max; x <= max; x++) {

			// obtain y = f(x) 
			fx = a*x + b;

			// fix x and y characters
			if (y == max && x == 0)
				printf("y");
			else if (x == max && y == 0)
				printf("x");

			// fix horizontal axis
			else if (x == 0)
				printf("|");

			// fix vertical axis
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
	printf("=================================================\n");
	printf("INPUTS\n");
	printf("=================================================\n");
	int a, b, c;
	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	printf("Enter c: ");
	scanf_s("%d", &c);

	char op = ' ', op_1 = ' ', op_2 = ' ';

	(a > 0) ? op = '+' : ' ';
	(b > 0) ? op_1 = '+' : ' ';
	(c > 0) ? op_2 = '+' : ' ';

	printf("Graph of: %c%dx^2%c%dx%c%d\n\n", op, a, op_1, b, op_2, c);

	int fx;

	// plot parabola
	for (int y = max; y >= -max; y--) {

		for (int x = -max; x <= max; x++) {

			// obtain y = f(x) 
			fx = a*pow(x,2)+(b*x)+c;

			// fix x and y characters
			if (y == max && x == 0)
				printf("y");
			else if (x == max && y == 0)
				printf("x");

			// fix horizontal axis
			else if (x == 0)
				printf("|");

			// fix vertical axis
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

void drawCircle() {

	// get inputs 
	printf("=================================================\n");
	printf("INPUTS\n");
	printf("=================================================\n");
	int a, b, r;

	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	printf("Enter radius: ");
	scanf_s("%d", &r);


	char op = ' ', op_1 = ' ', op_2 = ' ';

	(a > 0) ? op = '+' : ' ';
	(b > 0) ? op_1 = '+' : ' ';

	printf("Graph of (x%c%d)^2 + (y%c%d)^2 = r^2", op, a, op_1, b);
	printf("\nCenter (%d, %d), radius: %d\n\n", a, b, r);

	int fx;

	// plot circle
	for (int y = max; y >= -max; y--) {

		for (int x = -max; x <= max; x++) {

			// fix x and y characters
			if (y == max && x == 0)
				printf("y");
			else if (x == max && y == 0)
				printf("x");

			// fix horizontal axis
			else if (x == 0)
				printf("|");

			// fix vertical axis
			else if (y == 0)
				printf("-");

			// fix points

			// leave spaces
			else
				printf(" ");
		}

		printf("\n");
	}

	// plot parabola
}
