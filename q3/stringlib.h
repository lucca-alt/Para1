#ifndef STRINGLIB_H
#define STRINGLIB_H
#include <string>
#include <cctype>

namespace str {
    int getVowelCount(const std::string word);

    std::string rotateString(std::string word, int n);

    bool areAnagrams(std::string word1, std::string word2); 
}


#endif