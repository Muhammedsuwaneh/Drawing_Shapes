#include <stdlib.h>
#include <stdio.h>

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
	}

	printf("\n\n");
	return 0;
}


char displayMenu() {

	int choice;

	printf("Which shape would you like to draw\n");

	printf("Line\n");
	printf("Parabola\n");
	printf("Circle\n");
	printf("Choice: ");
	scanf_s("%d", &choice);

	return choice;
}

void drawLine() {

	printf("\nYou selected a line");
}

void drawParabola() {

	printf("You selected a Parabola");
}

void drawCircle() {

	printf("\nYou selected a Circle");
}
