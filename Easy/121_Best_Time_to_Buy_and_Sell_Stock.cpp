/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_b = INT_MAX;
        int max_p = 0 ;
        int n = prices.size();
        for(int i = 0 ; i< n ; i++){
            min_b = min(min_b,prices[i]);
            max_p= max(max_p , prices[i]-min_b);
        }
        return max_p;
    }
};

