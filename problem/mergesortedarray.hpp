#ifndef _MERGE_SORTED_ARRAY_H_
#define _MERGE_SORTED_ARRAY_H_
#include <cstring>
namespace LeetCode
{
    
class Solution
{
public:
    void merge(int A[], int m, int B[], int n) 
    {
        if(n == 0)
            return;
        if(m == 0)
            memcpy(A, B, n*sizeof(int));
        int k = m + n - 1;
        --m;
        --n;
        while(m >= 0 && n >= 0)
        {
            if(B[n] == A[m])
            {
                A[k] = A[m];
                --k;
                A[k] = B[n];
                --k;
                --m;
                --n;
            }
            else if(B[n] > A[m])
            {
                A[k] = B[n];
                --k;
                --n;
            }
            else
            {
                A[k] = A[m];
                --k;
                --m;
            }
        }
        if(n < 0)
            return;
        
        while(n >=0)
        {
            A[k--] = B[n--];
        }
    }
};

}

#endif