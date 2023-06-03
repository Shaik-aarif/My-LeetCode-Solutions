/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p = head;
        ListNode* q = NULL;

        if(head == NULL){
        return head;
        }

        while(p!= NULL){
 
            if(head->val == val){
            head = head->next;
            p = head;
            q = head;
            }
            else if(p->val != val){
            q =p ;
            p = p->next;
            }
            else{
            q->next = p->next ;
            p = p->next;
            }

        }

    return head;
    }
};