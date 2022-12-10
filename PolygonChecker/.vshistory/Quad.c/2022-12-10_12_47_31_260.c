#define _CRT_SECURE_NO_WARNINGS
#include "Quad.h"
#include <stdio.h>
#include <stdlib.h>

int calculate_length(struct point p1, struct point p2) {
    // calculate the differences between the x and y coordinates of the points
    int x_diff = p1.x - p2.x;
    int y_diff = p1.y - p2.y;

    // take the absolute value of the differences
    x_diff = abs(x_diff);
    y_diff = abs(y_diff);

    // use the Pythagorean theorem to calculate the length of the line
    int length = sqrt(x_diff * x_diff + y_diff * y_diff);

    return length;
}

void determine_rectangle(struct point p1, struct point p2, struct point p3, struct point p4) {
    // calculate the lengths of the lines formed by the points
    int length1 = calculate_length(p1, p2);
    int length2 = calculate_length(p2, p3);
    int length3 = calculate_length(p3, p4);
    int length4 = calculate_length(p4, p1);

    // check if any two lengths are equal
    if (length1 == length2 && length2 == length3 && length3 == length4) {
        // the lines form a square
        printf("The points form a square.\n");

        // calculate the perimeter and area of the square
        int perimeter = length1 * 4;
        int area = length1 * length1;

        printf("The perimeter of the square is %d.\n", perimeter);
        printf("The area of the square is %d.\n", area);
    }
    else if (length1 == length3 && length2 == length4) {
        // the lines form a rectangle
        printf("The points form a rectangle.\n");

        // calculate the perimeter and area of the rectangle
        int perimeter = length1 * 2 + length2 * 2;
        int area = length1 * length2;

        printf("The perimeter of the rectangle is %d.\n", perimeter);
        printf("The area of the rectangle is %d.\n", area);
    }
    else {
        // the lines do not form a rectangle or square
        printf("The points do not form a rectangle or square.\n");
    }
}

void get_user_input(struct point* p1, struct point* p2, struct point* p3, struct point* p4) {
    // prompt the user to enter the coordinates for each point
    printf("Enter the x coordinate for point 1: ");
    scanf("%d", &p1->x);

    printf("Enter the y coordinate for point 1: ");
    scanf("%d", &p1->y);

    printf("Enter the x coordinate for point 2: ");
    scanf("%d", &p2->x);

    printf("Enter the y coordinate for point 2: ");
    scanf("%d", &p2->y);

    printf("Enter the x coordinate for point 3: ");
    scanf("%d", &p3->x);

    printf("Enter the y coordinate for point 3: ");
    scanf("%d", &p3->y);

    printf("Enter the x coordinate for point 4: ");
    scanf("%d", &p4->x);

    printf("Enter the y coordinate for point 4: ");
    scanf("%d", &p4->y);
}