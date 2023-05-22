/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* r = NULL;
        
        while(p!= 0){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
         head = q;

        return q;
    }
};