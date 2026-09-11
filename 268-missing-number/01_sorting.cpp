// Problem: 268. Missing Number
// Link: https://leetcode.com/problems/missing-number/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // approach 1:
        //loop chlao 0 se n tk and jo i ke equal nhi hau vhi osluiton hoga
        int answer=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                return i;
            }
        }
        return answer;
        
        // T.C: O(N log N)
        // S.C: O(1)
    }
};
