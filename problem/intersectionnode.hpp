#ifndef _INTERSECTION_NODE_H
#def    _INTERSECTION_NODE_H

namespace LeetCode{

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        
        ListNode* tailA = headA;
        ListNode* tailB = headB;
        
        while(tailA->next != NULL)
        {
            tailA = tailA->next;
        }
        
        while(tailB->next != NULL)
        {
            tailB = tailB->next;
        }
        
        if(tailA != tailB)
            return NULL;
            
        
    }
};

}


#endif