// Problem: 2778. Sum of Squares of Special Elements
// Link: https://leetcode.com/problems/sum-of-squares-of-special-elements/
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                sum += nums[i - 1] * nums[i - 1];
            }
        }

        return sum;
    }
};
