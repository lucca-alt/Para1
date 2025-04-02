#include "triangle.h"
#include <iostream>

using namespace std;

int main () {
    double base = base, height;

    
    cout << "Enter base: "; //wrong quotation marks were used
    cin >> base; // dashes were '<<' instead of '>>'

    cout << "Enter height: "; // dashes wrong direction for cout
    cin >> height;

    triangle tri = construct_triangle(base, height); //added missing argument

    cout << "Triangle area: " << calculate(tri) << endl; //wrong quotation marks

    return 0 ;
}