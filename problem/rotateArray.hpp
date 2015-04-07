#ifndef _ROTATE_ARRAY_H
#define _ROTATE_ARRAY_H
namespace LeetCode{

class Solution {
    public:
        void rotate(int nums[], int n, int k){
            if(k%n == 0)
                return;
            
            k = k % n;
            
            int value = nums[0];
            int finished_count = 0;
            
            int index = 0;
            int start_index = 0;
          
            while(finished_count < n)
            {
                index = (index + k) % n;
                value ^= nums[index];
                nums[index] ^= value;
                value ^= nums[index];
                
                if(index == start_index)
                {
                    ++index;
                    start_index = index;
                    value = nums[index];
                }
                ++count;
            }
        }
}

};


#endif