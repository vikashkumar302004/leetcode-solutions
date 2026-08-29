// Problem: 2348. Number of Zero-Filled Subarrays
// Link: https://leetcode.com/problems/number-of-zero-filled-subarrays/

#include <vector>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long answer = 0;
        long long curr = 0;
        for(int &a : nums) {
            if(a != 0) curr = 0;
            if(a == 0) curr++;
            answer += curr;
        }
        return answer;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
