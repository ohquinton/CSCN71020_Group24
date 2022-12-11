#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"
/*Dominic Szymanski - Quinton Jackson - kaiden Providence - CSCN7020 - Group 24 - 2022/12/01
Given the Program we implemented a get angle function that will solve for three angles within a trianlge given all three
sides using sin law cosine law. We then implemented the recatnglefunctions. The first function is for user inputs and takes 4 xy coordiantes as input
The next function will determine the length of the lines but subtracting the and x/y values by each other then using Pythagorean theorem.
Those values are then passed to the next which function which to determine whether or not it is a rectangle or square if a square or rectangle
it will provide the user with the perimeter and area.*/



char* analyzeTriangle(int side1, int side2, int side3)
{
	char* result = "";
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
		printf_s("It is a valid triangle\n");
		
	getTriangleAngles(side1, side2, side3);
	}
	else {
		printf_s("It is an invalid triangle");
		return 0;
	}
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle\n";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}


int* getTriangleAngles(double side1, double side2, double side3)
{
	double area, s, A, B, C, R, pi;
	pi = acos(-1);

	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

	R = (side1 * side2 * side3) / (4 * area);

	A = (180 / pi) * asin(side1 / (2 * R));
	B = (180 / pi) * asin(side2 / (2 * R));
	C = (180 / pi) * asin(side3 / (2 * R));
	printf("The angles of this triangle are: %lf %lf %lf\n", A, B, C);
}