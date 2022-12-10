#pragma once

// Define a point structure
struct point {
	int x;
	int y;
};

int calculate_length(struct point p1, struct point p2);
void determine_rectangle(struct point p1, struct point p2, struct point p3, struct point p4);
void get_user_input(struct point* p1, struct point* p2, struct point* p3, struct point* p4);
