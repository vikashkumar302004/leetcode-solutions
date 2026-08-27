// Problem: 1636. Sort Array by Increasing Frequency
// Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/

#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        // poimt to rember how to stiore key sin descending order


        //my dangerous approach 
        //step1:frequency count krlo each element ki
        //descendig order map banao
        map<int,int,greater<int>>mp;
        for(auto x:nums){
            mp[x]++;
        }
        //maxium frequncy count krlo 
        int maxi=0;
        for(auto x:mp){
            if(x.second>maxi){
                maxi=x.second;
            }
        }
        int i=1;
        int n=mp.size();
        //loop cjlao start from maxum frequency and goes till 1
        while(i<=maxi){
            for(auto x:mp){
                // jo element find hua usko uske frequeny ke according print krdo 
                if(x.second==i){
                    for(int j=1;j<=i;j++){
                        ans.push_back(x.first);
                    }
                }
            }
            i++;

            }
        return ans;
        
        
        
    }
};
