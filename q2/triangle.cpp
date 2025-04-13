#include "triangle.h"

triangle construct_triangle(double base, double height) { //adjusted all the 'triangle'for consistency
    triangle tri;
    tri.base = base; // unnecessary & on base (?)
    tri.height = height;
    return tri; 
}

double calculate(triangle tri) { //changed return type from int to double so it doesn't overload
    return 0.5 * tri.base * tri.height; //change 1 /2 to 0.5 because of integer division
}
