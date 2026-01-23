// Submission Link : https://leetcode.com/problems/3sum/submissions/1893957954/

// Code ---->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i!=0 and nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                long long sum = nums[i]+nums[j];
                sum += nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k and nums[j]==nums[j-1]) j++;
                    while(j<k and nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};