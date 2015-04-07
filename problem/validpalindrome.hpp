#ifndef _VALID_PALINDROME_H_
#define _VALID_PALINDROME_H_
#include <string>
using std::string;

namespace LeetCode {
    
class Solution {
public:
    bool isPalindrome(string s) {
        auto i = s.begin();
        auto j = s.end() - 1;
        while(i < j)
        {
            if(!isalnum(*i))
            {
                ++i;
                continue;
            }
            if(!isalnum(*j))
            {
                --j;
                continue;
            }
            if(isalpha(*i))
            {
                if(tolower(*i) != tolower(*j))
                    return false;
            }else 
            {
                if(*i != *j)
                    return false;
            }
            ++i;
            --j;
        }
        
        return true;
    }
};

}

#endif