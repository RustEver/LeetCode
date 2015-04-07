#ifndef _REVERSE_BITS_H_
#define _REVERSE_BITS_H_
#include "stdint.h"
#include "stdio.h"

namespace LeetCode {
    
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned result = 0;
        int i = sizeof(n) * 8;
        while(i > 0)
        {
            result = result * 2 + (n & 1);
            n = n >> 1;
            i--;
        }
        
        return result;
    }
};

}

#endif