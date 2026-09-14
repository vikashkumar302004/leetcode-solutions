// Problem: 31. Next Permutation
// Link: https://leetcode.com/problems/next-permutation/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // dekho piche se traverse kro tb tk arr[i-1]<arr[i]
        // jba aisa index mil jaye store karlo
        // phir usse just next greater element dhundo 
        // uska index bhi store kro and swap krdo
        // and phir arr[i-1] ke baad reverse krdxo sbko

        int main_index = -1;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                main_index = i - 1;
                break;
            }
        }
        
        int swap_index = -1;
        if (main_index != -1) {
            for (int i = nums.size() - 1; i > main_index; i--) {
                if (nums[i] > nums[main_index]) {
                    swap(nums[i], nums[main_index]);
                    break;
                }
            }
        }

        reverse(nums.begin() + main_index + 1, nums.end());

        // T.C: O(N)
        // S.C: O(1)
    }
};
