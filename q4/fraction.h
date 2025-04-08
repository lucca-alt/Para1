#ifndef FRACTION_H
#define FRACTION_H 

struct Fraction {
    int numerator;
    int denominator;
};

Fraction add(Fraction a, Fraction b);
Fraction subtract(Fraction a, Fraction b);
Fraction multiply(Fraction a, Fraction b);
Fraction divide(Fraction a, Fraction b);


#endif /* FRACTION_H */