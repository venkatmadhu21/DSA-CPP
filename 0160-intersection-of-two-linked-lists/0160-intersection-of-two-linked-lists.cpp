/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* PA=headA;
        ListNode* PB=headB;
        while(PA!=PB){
            PA=(PA==nullptr) ? headB : PA->next;
            PB=(PB==nullptr) ? headA : PB->next;
        }
        return PA;
    }
};