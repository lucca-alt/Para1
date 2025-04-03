#include "stringlib.h"
#include <iostream>

using namespace str;

int main(){

    std::cout << getVowelCount("AUIOIUSAAAOIIU");
    std::cout << "\n";
    std::cout << rotateString("Hello", 8);
    std::cout << "\n";
    std::cout << areAnagrams("sIlent", "listen");
    return 0;
}