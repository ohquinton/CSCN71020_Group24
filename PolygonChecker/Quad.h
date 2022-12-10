#pragma once
/*Dominic Szymanski - Quinton Jackson - kaiden Providence - CSCN7020 - Group 24 - 2022/12/01
Given the Program we implemented a get angle function that will solve for three angles within a trianlge given all three
sides using sin law cosine law. We then implemented the recatnglefunctions. The first function is for user inputs and takes 4 xy coordiantes as input
The next function will determine the length of the lines but subtracting the and x/y values by each other then using Pythagorean theorem.
Those values are then passed to the next which function which to determine whether or not it is a rectangle or square if a square or rectangle
it will provide the user with the perimeter and area.*/

// Define a point structure
struct point {
	int x;
	int y;
};

int calculate_length(struct point p1, struct point p2);
char* determine_rectangle(struct point p1, struct point p2, struct point p3, struct point p4);
void get_user_input(struct point* p1, struct point* p2, struct point* p3, struct point* p4);
int calculate_rectangle_perimeter(int length1, int length2);
int calculate_rectangle_area(int length1, int length2);
int calculate_square_perimeter(int length);
int calculate_square_area(int length);