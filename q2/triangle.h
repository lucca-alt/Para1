#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef struct {
    int base;
    double height;
} triangle; 

triangle construct_triangle(int base, double height);
double calculate(triangle tri); //missing ';' , changed argument to tri for more clarity

#endif /* TRIANGLE_H */
