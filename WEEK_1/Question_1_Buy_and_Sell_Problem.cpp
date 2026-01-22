// Submission Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1892915362/

// Code ---->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            else if(prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};