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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL){
            return head;
        }
        map<int , int>mp;
        while(head!=NULL){
            mp[head->val]++;
            head = head->next;
        }
        vector<int>v;
        for(auto x : mp){
           if(x.second ==1){
               v.push_back(x.first);
           }
        }
        if(v.empty()){
            return NULL;
        }
        sort(v.begin(),v.end());

        ListNode* ans = new ListNode(v[0]);
        ListNode* p = ans;

        for(int i = 1; i<v.size() ; i++){
            ListNode* q = new ListNode(v[i]);
            p->next = q;
            p = p->next;
        }
        return ans;
    }
};