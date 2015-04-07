#include <iostream>
//#include "./problem/compareversion.hpp"
//#include "./problem/hammingWeight.hpp"
//#include "./problem/reversebits.hpp"
//#include "./problem/validpalindrome.hpp"
//#include "./problem/mindepthofbinarytree.hpp"
//#include "./problem/pascaltriangle.hpp"
//#include "./problem/pascaltriangle2.hpp"
#include "./problem/mergesortedarray.hpp"

using namespace std;
using namespace LeetCode;

int main(void)
{
    int a[2] = {2};
    int b[1] = {1};
    Solution solution;
    solution.merge(a, 1, b, 1);
    cout << "The result is: ";
    for(int i = 0;i < 2;++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    //cout << "The result is:" <<   solution.minDepth("race a car") << endl;
    
    return 0;
}