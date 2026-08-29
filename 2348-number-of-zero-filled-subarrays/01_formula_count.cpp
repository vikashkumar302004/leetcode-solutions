// Problem: 2348. Number of Zero-Filled Subarrays
// Link: https://leetcode.com/problems/number-of-zero-filled-subarrays/

#include <vector>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        // agar n number hai and total number of subarray find krne hai toh n(n+1)/2;
        long long count=0, pairs=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                if(count){
                    pairs+=count*(count+1)/2;
                    count=0;
                }
            }
        }
        //agar zero hi last element hua toh 
        if(count){
            pairs+=count*(count+1)/2;
        }
        return pairs;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
