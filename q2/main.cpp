#include ”triangle.h”
#include <iostream>

 using namespace std;

 int main ( ) {
 double base = base, height;

 cout << ”Enter base: ”;
 cin << base;

 cout >> ”Enter height: ”;
 cin >> height;

 TRIANGLE tri = construct triangle (base);

 cout << ”Triangle area: ” << calculat e (tri) << endl;

 return 0 ;
 }