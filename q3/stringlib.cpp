#include "stringlib.h"
#include <algorithm>

namespace str {

    int getVowelCount(const std::string word){
        int count = 0;
        
        for(int i = 0; i < word.size(); i++){
            char c = tolower(word[i]);

            switch (c){
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            default:
                break;
            }
        }
        return count;
    }

    std::string rotateString(std::string word, int n){
        if(word.length() == 0){
            return word;
        }

        n = n % word.length(); //warps around by the remainder, when n > word.length(), else works normally
        word = word.substr(n) + word.substr(0, n); // by appending the substring from the start to n,
                                                   // to the word starting at n, we rotate it by n
        return word;
    }

    bool areAnagrams(std::string word1, std::string word2){
        if (word1.length() != word2.length()){
            return false;
        }

        std::sort(word1.begin(), word1.end());
        std::sort(word2.begin(), word2.end());

        return word1 == word2;
    }
}