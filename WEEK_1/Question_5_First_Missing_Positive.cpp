// Submission Link : https://leetcode.com/problems/first-missing-positive/submissions/1893962359/

// Code ---->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long target = 1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                target++;
            }
        }
        return target;
    }
};