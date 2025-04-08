#include "fraction.h"
#include <numeric>

using namespace std;

Fraction add(Fraction a, Fraction b){ //for some reason doesnt compile but should give the right result
    Fraction sum;

    if (a.denominator != b.denominator){
        sum.denominator = lcm(a.denominator, b.denominator); //kleinstes gemeinsames vielfaches

        a.numerator = a.numerator * (sum.denominator / a.denominator); // to fit the numerator to the lcm
        b.numerator = b.numerator * (sum.denominator / b.denominator);

        sum.numerator = a.numerator + b.numerator;

        return sum;
        }

    sum.numerator = a.numerator + b.numerator;
    sum.denominator = a.denominator;
    return sum; 
    } 


Fraction subtract(Fraction a, Fraction b){ //same here as in the add function
    Fraction diff;

    if (a.denominator != b.denominator){
        diff.denominator = lcm(a.denominator, b.denominator); //kleinstes gemeinsames vielfaches

        a.numerator = a.numerator * (diff.denominator / a.denominator); // to fit the numerator to the lcm
        b.numerator = b.numerator * (diff.denominator / b.denominator);

        diff.numerator = a.numerator - b.numerator;

        return diff;
        }

    diff.numerator = a.numerator - b.numerator;
    diff.denominator = a.denominator;
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
    int newD = b.numerator;
    int newN = b.denominator;

    quotient.numerator = a.numerator * newN;
    quotient.denominator = a.denominator * newD;

    return quotient;
}


Fraction simplifyFraction(Fraction f){
    
}

int main(){



    return 0;
}