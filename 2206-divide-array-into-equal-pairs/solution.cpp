// Problem: 2206. Divide Array Into Equal Pairs
// Link: https://leetcode.com/problems/divide-array-into-equal-pairs/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        //phele frequnecy count krlo if kisi ki frequency odd aye toh 0 vrna 1
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;

        }
        for(auto x:mp){
            if(x.second%2!=0){
                return 0;
            }
        }
        return 1;
        //T.C O(N)
    }
};
