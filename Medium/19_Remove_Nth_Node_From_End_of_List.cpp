/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int size  = 0 ;
        // ListNode* dhead = head;
        // while(dhead){
        //     size++;
        //     dhead= dhead->next;
        // }
        // if(size == 1){
        //     return NULL;
        // }
        // if(head == NULL){
        //     return head;
        // }

        // int new_posi =  size-n;
        // ListNode* rhead = new ListNode();
        // rhead->next = head;
        // for(int i = 0 ; i< new_posi ; i++){
        //     rhead = rhead->next;
        // }
        // if(size == n ){
        //     rhead->next = NULL;
        // }
        // else{
        // ListNode* p = rhead->next;
        // rhead->next = p->next;
        // }
        

        // return head;


        ListNode*  start = new ListNode();
        start->next = head;
        ListNode*  slow = start;
        ListNode*  fast= start;

        for(int i = 1 ; i<= n ; ++i){
            fast = fast->next;
        }
        while(fast->next != NULL){
            fast = fast->next ;
            slow = slow->next;
        }
        slow->next =slow->next->next;

        return start->next; 
    }
};