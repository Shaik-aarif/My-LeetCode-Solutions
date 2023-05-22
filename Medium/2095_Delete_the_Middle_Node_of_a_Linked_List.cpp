/*
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode* p = head;
        int len = 0 ;
        while(p!=0){
            len++;
            p=p->next;
        }
        if(len == 1){
            head = NULL;
            return head;
        }
        int posi = len/2;
        ListNode* x = head;
        ListNode* y = NULL;
        ListNode* temp;
        for(int i = 0 ; i<posi ; i++){
            y = x;
            x= x->next;
        }
        y->next = x->next;
        temp= x;
        x = x->next;
        delete(temp);


        return head;
    }
};