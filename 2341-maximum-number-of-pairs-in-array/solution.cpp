// Problem: 2341. Maximum Number of Pairs in Array
// Link: https://leetcode.com/problems/maximum-number-of-pairs-in-array/

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        int pair=0;
        // Intialised the pairs with zero
        int leftover=0;
        //Intialised the leftover with zero
        for(auto x:nums){
            mp[x]++;
        }
        //
        int count=0;
        for(auto x:mp){
            // even number hai toh count krlo 2 se divide krke and add into pair
            int p=x.second;
            if(p%2==0){
                pair=pair+(p/2);
                

               
            }
            else{
                p=p-1;
                //odd hai toh 1 minus kro and baki ka 2 se divide krke pair mai add krdo
                count++;

                pair=pair+(p/2);
            }
        }
        ans.push_back(pair);
        ans.push_back(count);
        return ans;
            

        
        // T.C: O(N log N) using map (O(N) if using unordered_map)
    }
};
