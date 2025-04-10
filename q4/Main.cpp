#include "fraction.h"
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

Fraction add(Fraction a, Fraction b){ 
    Fraction sum;

    sum.numerator = a.numerator * b. denominator + b.numerator * a.denominator; 
    sum.denominator = a.denominator * b.denominator;
    
    return sum; 
    } 


Fraction subtract(Fraction a, Fraction b){ 
    Fraction diff;

    diff.numerator = a.numerator * b. denominator - b.numerator * a.denominator;
    diff.denominator = a.denominator * b.denominator;

    return diff; 
}


Fraction multiply(Fraction a, Fraction b){
    Fraction product;

    product.numerator = a.numerator * b.numerator;
    product.denominator = a.denominator * b.denominator;

    return product;
}


Fraction divide(Fraction a, Fraction b){
    Fraction quotient;

    quotient.numerator = a.numerator * b.denominator;
    quotient.denominator = a.denominator * b.numerator;

    return quotient;
}


Fraction simplifyFraction(Fraction f){
    Fraction simple;
    int a = max(f.numerator, f.denominator);
    int b = min(f.numerator, f.denominator);

    while (b!= 0){
        int c = b;
        b = a % b;
        a = c;
    }

    simple.numerator = f.numerator / a;
    simple.denominator = f.denominator / a;

    return simple;
}

int main(){
    Fraction f;
    f.numerator = 13;
    f.denominator = 5;

    Fraction g;
    g.numerator = 14;
    g.denominator = 15;

    Fraction addR = add(f, g);
    cout << addR.numerator << "/" << addR.denominator << endl;

    Fraction subR = subtract(f, g);
    cout << subR.numerator << "/" << subR.denominator << endl;

    Fraction multR = multiply(f, g);
    cout << multR.numerator << "/" << multR.denominator << endl;

    Fraction divideR = divide(f, g);
    cout << divideR.numerator << "/" << divideR.denominator << endl; 

    Fraction result = simplifyFraction(f);
    cout << result.numerator << "/" << result.denominator << endl;

    Fraction simpleAdd = simplifyFraction(add(f, g));
    cout << simpleAdd.numerator << "/" << simpleAdd.denominator << endl;

    return 0;
}