#pragma once

// Define a point structure
typedef struct {
    double x;
    double y;
} Point;

// Define a line structure
typedef struct {
    Point start;
    Point end;
} Line;


Line createLine(Point start, Point end);
double getLineLength(Line line);