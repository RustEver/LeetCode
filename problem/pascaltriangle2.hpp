#ifndef _PASCAL_TRIANGLE2_H_
#define _PASCAL_TRIANGLE2_H_
#include <vector>
#include "stdint.h"
#include <ostream>

using std::vector;

namespace LeetCode
{
    
class Solution
{
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex < 0)
            return vector<int>(0);
            
        vector<int> row(rowIndex + 1);
        uint64_t num = 1;
        uint64_t den = 1;
        for(int i = 0;i <= rowIndex;++i)
        {
            if(i == 0 || i == rowIndex)
            {
                row[i] = 1;
                continue;
            }
            std::cout << row.at(i - 1) << " * " << (rowIndex - i + 1) << std::endl;
            row[i] = row.at(i - 1) / i * (rowIndex - i + 1) ;
        }
        return row;
    }
    
};

}

#endif