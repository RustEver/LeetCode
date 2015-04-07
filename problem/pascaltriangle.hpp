#ifndef _PASCAL_TRIANGLE_H_
#define _PASCAL_TRIANGLE_H_
#include <vector>

using std::vector;

namespace LeetCode
{
    
class Solution
{
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> triangle(0);
        for(int i = 0;i < numRows;++i)
        {
            vector<int> row_vec(i + 1);
            triangle.push_back(row_vec);
        }
        
        auto it = triangle.begin();
        auto it_pre = it;

        for(unsigned i = 0;i < numRows;++i)
        {
            if(i == 0)
            {
                (*it)[0] = 1;
                ++it;
                continue;
            }
            
            for(unsigned j = 0;j <= i;++j)
            {
                if(0 == j || j == i)
                {
                    (*it)[j] = 1;
                    continue;
                }
                (*it)[j] = it_pre->at(j) + it_pre->at(j -1);
            }
            it_pre = it;
            ++it;
        }
        return triangle;
    }
    
};

}

#endif