#include "stringlib.h"

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
}