#include <iostream>
#include <cmath>

using namespace std;

typedef int (*Comparator)(double*, double*);

int compare_sum(double* a, double* b) {
    double sumA = a[0] + a[1] + a[2];
    double sumB = b[0] + b[1] + b[2];

    if (sumA < sumB) return -1;
    if (sumA == sumB) return 0;
    if (sumA > sumB) return 1;

    return 0;
}

int compare_l2(double* a, double* b) {
    double normA = sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
    double normB = sqrt(b[0]*b[0] + b[1]*b[1] + b[2]*b[2]);

    if (normA < normB) return -1;
    if (normA == normB) return 0;
    if (normA > normB) return 1;

    return 0;
}

int compare(double* a, double* b, Comparator cmp) {
    return cmp(a, b);
}

int main() { //did not compile for me, so I changed how the array is made
    double* array1 = new double[3];
    array1[0] = 75; 
    array1[1] = 5; 
    array1[2] = 29;

    double* array2 = new double[3];
    array2[0] = 1; 
    array2[1] = 10; 
    array2[2] = 7;


    std::cout << compare(array1, array2, compare_sum) << std::endl;
    std::cout << compare(array1, array2, compare_l2) << std::endl;

    delete[] array1;
    delete[] array2;

    return 0;
}

