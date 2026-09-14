# 31. Next Permutation

- **Difficulty**: Medium
- **LeetCode Link**: [31. Next Permutation](https://leetcode.com/problems/next-permutation/)

## Problem Statement

A **permutation** of an array of integers is an arrangement of its members into a sequence or linear order.

- For example, for `arr = [1,2,3]`, the following are all the permutations of `arr`: `[1,2,3]`, `[1,3,2]`, `[2,1,3]`, `[2,3,1]`, `[3,1,2]`, `[3,2,1]`.

The **next permutation** of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the **next permutation** of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

Given an array of integers `nums`, find the next permutation of `nums`.

The replacement must be **in place** and use only constant extra memory.

## Solution

### C++ Solution
- **Time Complexity**: $O(N)$ — Traversing the array to find pivot and swap element.
- **Space Complexity**: $O(1)$ — In-place rearrangement.

```cpp
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
```
