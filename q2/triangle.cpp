#include "triangle.h"

triangle construct_triangle(double base, double height) { //adjusted all the 'triangle'for consistency
    triangle tri;
    tri.base = base; // unnecessary & on base (?)
    tri.height = height;
    return tri; 
}

double calculate(triangle tri) { //changed return type from int to double so it doesn't overload
    return (1 / 2) * tri.base * tri.height;
}
