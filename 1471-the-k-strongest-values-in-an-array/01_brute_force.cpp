// Problem: 1471. The k Strongest Values in an Array
// Link: https://leetcode.com/problems/the-k-strongest-values-in-an-array/
// Approach 1: Brute Force
// Time Complexity: O(N log N + K * N)
// Space Complexity: O(N)

#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int mid = ((n - 1) / 2);
      
        int mid2 = arr[mid];
        vector<int> temp;
        for (auto x : arr) {
            int diff = abs(x - mid2);
            temp.push_back(diff);
        }
        vector<int> ans;
        unordered_map<int, int> mp;
        while (k) {
            int largest = INT_MIN;
            int index = 0;
            
            for (int i = temp.size() - 1; i >= 0; i--) {
                if (mp[i] == 0) {
                    if (largest < temp[i]) {
                        largest = temp[i];
                        index = i;
                    }
                }
            }
            mp[index] = 1;
            int m = arr[index];
            ans.push_back(m);
            k--;
        }
        return ans;
    }
};
