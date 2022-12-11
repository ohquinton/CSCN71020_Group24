#pragma once

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