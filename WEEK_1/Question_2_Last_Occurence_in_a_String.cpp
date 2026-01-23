// Submission Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1883648045/

// Code ---->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int k = needle.size();
        if(haystack.size() < needle.size()){
            return -1;
        }
        while(i<haystack.size()){
            int it = i;
            int j = 0;
            int count = 0;
            while(j<needle.size()){
                if(it-i+1 > k){
                    break;
                }
                if(haystack[it] == needle[j]){
                    count++;
                }
                else{
                    break;
                }
                if(count == k){
                    return i;
                }
                j++;
                it++;
            }
            i++;
        }
        return -1;
    }
};