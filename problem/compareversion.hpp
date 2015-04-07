#ifndef _COMPARE_VERSION_HPP_
#define _COMPARE_VERSION_HPP_

#include <string>
#include <algorithm>

using namespace std::string;

namespace LeetCode {
    
class Solution {
public:
    int compareVersion(string version1, string version2) {
        size_t i = 0;
        size_t j = 0;
        string str1, str2 = "0";
        while(i < version1.size() || j < version2.size()) {
            while (str1.back() != '.' && i < version1.size()) str1 += version1[i++];
            while (str2.back() != '.' && j < version2.size()) str2 += version2[j++];
            if (stoi(str1) > stoi(str2)) {
                return 1;
            } else if (stoi(str1) < stoi(str2)) {
                return -1;
            }
            str1 = "0";
            str2 = "0";
        }
        return 0;
    }
};

}
#endif