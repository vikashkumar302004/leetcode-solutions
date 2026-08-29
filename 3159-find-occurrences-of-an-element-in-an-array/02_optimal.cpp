// Problem: 3159. Find Occurrences of an Element in an Array
// Link: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                mp[i]=x;
                count++;
            }
        }
        
        vector<int>ans;
        for(auto y:mp){
            if(y.second==x){
                ans.push_back(y.first);
            }
        }
        vector<int>realanswer;
        int j=0;

        for(int i=0;i<queries.size();i++){
            if(queries[i]<=count){
                int k=queries[i];
                int temp=ans[k-1];
                realanswer.push_back(temp);
                
            }
            else{
                realanswer.push_back(-1);
            }
            
        }
        return realanswer;
        
        // T.C: O(N log K + Q) where N = nums.size(), K = count of x, Q = queries.size()
        // S.C: O(K + Q)
    }
};
