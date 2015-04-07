#ifndef _HAMMING_WEIGHT_H_
#define _HAMMING_WEIGHT_H_
#include "stdint.h"

namespace LeetCode {
    
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0)
        {
            if((n & 1) != 0)
                ++count;
            n = n / 2;
        }
        return count;
    }
};

}


#endif