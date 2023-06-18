class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // by defalut priority queue is max_heap so 
        // we can declare a min heap by the following line 
        // priority_queue <int , vector<int> , greater<int>> pq;
        // or else we can multiply -1 and push elements and return multiplying with -1 this implements min heap as well 
        priority_queue <int > pq;

        for(int i = 0 ; i< nums.size() ; i++){
            pq.push(-nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return -pq.top();
        
    }
};


