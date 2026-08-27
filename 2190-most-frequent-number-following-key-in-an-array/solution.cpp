// Problem: 2190. Most Frequent Number Following Key In an Array
// Link: https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        // unique mtlb different intege
        vector<int>ans;
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                ans.push_back(nums[i+1]);
                mp[nums[i+1]]++;
                if(maxi<mp[nums[i+1]]){
                    maxi=mp[nums[i+1]];
                    // one guideline for eveyone do not use gpt for debugging ,use pen apper  i made mistake during my preparation ..
                }


            }
        }
        int answer=0;
        for(auto x:ans){
            if(mp[x]==maxi){
                answer=x;
                return answer;
            }
        }
        return answer;
        //T.C O(N)
    }
};
