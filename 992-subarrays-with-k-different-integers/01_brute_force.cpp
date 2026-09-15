// Problem: 992. Subarrays with K Different Integers
// Link: https://leetcode.com/problems/subarrays-with-k-different-integers/

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_set<int> s;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            s.clear(); 
            for (int j = i; j < nums.size(); j++) {
                s.insert(nums[j]);
                if (s.size() > k) {
                    break;
                }
                if (s.size() == k) {
                    count++;
                }
            }
        }
        return count;

        // T.C: O(N^2)
        // S.C: O(K)
    }
};
