#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3)
{
	char* result = "";
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
		printf_s("It is a valid triangle\n");
		
	getTriangleAngles(side1, side2, side3);
	}
	else {
		printf_s("It is an invalid triangle ");
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