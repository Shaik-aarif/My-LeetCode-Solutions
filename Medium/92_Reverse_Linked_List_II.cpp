/*
Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int a[right-left+1];
        ListNode* p = head ;
        for(int i = 0 ; i< left-1 ; i++){
            p = p->next;
        }
        ListNode* q = p;
        for(int i =  0; i< right-left+1 ; i++){
            a[i] = p->val;
            p = p->next;
        }
        for(int i = right-left ;i >= 0 ; i-- ){
            q->val = a[i];
            q = q->next;
        }

        return head;
    }
};