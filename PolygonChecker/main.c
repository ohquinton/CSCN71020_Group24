#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include "triangleSolver.h"
#include "Quad.h"

/*Dominic Szymanski - Quinton Jackson - kaiden Providence - CSCN7020 - Group 24 - 2022/12/01 
Given the Program we implemented a get angle function that will solve for three angles within a trianlge given all three
sides using sin law cosine law. We then implemented the recatnglefunctions. The first function is for user inputs and takes 4 xy coordiantes as input
The next function will determine the length of the lines but subtracting the and x/y values by each other then using Pythagorean theorem. 
Those values are then passed to the next which function which to determine whether or not it is a rectangle or square if a square or rectangle 
it will provide the user with the perimeter and area.*/

int main() {
	struct point p1,p2, p3,p4;
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 2:
			printf_s("quadrilateral selected.\n");
			// get the coordinates for the points from the user
			get_user_input(&p1, &p2, &p3, &p4);

			// determine if the points form a rectangle or square
			char* result2 = determine_rectangle(p1, p2, p3, p4);

			// print the result
			printf("%s", result2);
			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Quadrilateral\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}