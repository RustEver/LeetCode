#ifndef _MIN_DEPTH_OF_BINARYSTACK_H_
#define _MIN_DEPTH_OF_BINARYSTACK_H_
#include <queue>

using std::queue;
namespace LeetCode {
    
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    int minDepth(TreeNode *root) {
        if(root == nullptr)
            return 0;
            
        int depth = 1;
        int cur_nodes_cnt = 1;
        int next_nodes_cnt = 0;
        
        std::queue<TreeNode *> myqueue;
        myqueue.push(root);
        TreeNode  *node;
        do {
            if(!cur_nodes_cnt)
            {
                cur_nodes_cnt = next_nodes_cnt;
                next_nodes_cnt = 0;
                ++depth;
            }
            
            node = myqueue.front();
            myqueue.pop();
            
            if(node->left == nullptr && node->right == nullptr)
                return depth;
            --cur_nodes_cnt;
            
            if(node->left != nullptr)
            {
                myqueue.push(node->left);
                ++next_nodes_cnt; 
            }
            if(node->right != nullptr)
            {
                myqueue.push(node->right);
                ++next_nodes_cnt;
            }
        }while(!myqueue.empty())
        return depth;
    }
};

}

#endif