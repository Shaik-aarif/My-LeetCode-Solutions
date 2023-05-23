/*
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
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
    ListNode* swapPairs(ListNode* head) {

        ListNode* temp = new ListNode(-1);
        temp->next = head;

        ListNode* node = temp ;

        while(node && node->next && node->next->next){

            ListNode* first = node;
            ListNode* second = node->next;
            ListNode* third = node->next->next;

            first->next = third;
            second->next = third->next;
            third->next = second;

            node= second;

        }


        return temp->next;
        
    }
};