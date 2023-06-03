/*
Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.
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
private: 
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
public:
    bool isPalindrome(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL ){
            slow = slow->next;
            fast= fast->next->next;
        }

        slow->next = reverseList(slow->next);

        ListNode* p = slow->next ;
        ListNode* dummy = head ;
        while(p!=0){
            if(dummy->val != p->val){
                return false;
            }
            dummy = dummy->next;
            p = p->next;
        }



        return true;
    }
};