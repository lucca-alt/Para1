#include <iostream>
#include <algorithm>


int* arrayFunction(int* a, int alen, int* b, int blen, int* deflt){
    int maxlen = std::max(alen, blen);
    int* c = new int[maxlen];

    for(int i = 0; i < maxlen; i++){
        int aval;
        int bval;
        int j = blen - 1 - i;
        if(i < alen){
            aval = a[i];
        } else if(deflt != nullptr){
            aval = *deflt;
        } else {
            aval = 0;
        }

        if(j >= 0){
            bval = b[j];
        } else if(deflt != nullptr){
            bval = *deflt;
        } else {
            bval = 0;
        }

        if(aval == bval){
            c[i] = aval + bval;
        } else {
            c[i] = std::max(aval, bval);
        }
    }

    return c;
    }

int main(){
    int a[] = {12, 15, 24};
    int b[] = {8, 15, 122, 12};

    int alen = 3;
    int blen = 4;
    int deflt = 9;

    int maxlen = std::max(alen, blen);
    int* array = arrayFunction(a, alen, b, blen, &deflt);

    std::cout << "[ ";
    for(int i = 0; i < maxlen; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "]";

    delete[] array;
    return 0;
}