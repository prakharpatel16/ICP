// Submission Link :https://leetcode.com/problems/count-primes/submissions/1893959639/

// Code ---->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<int> hash(n,0);
        for(int i=2;i<n;i++){
            if(hash[i] != -1){
                count++;
                for(int j=i*2;j<n;j+=i){
                    hash[j] = -1;
                }
            }
            else{
                continue;
            }
        }
        return count;
    }
};