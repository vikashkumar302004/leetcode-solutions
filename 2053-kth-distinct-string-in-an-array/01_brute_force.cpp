// Problem: 2053. Kth Distinct String in an Array
// Link: https://leetcode.com/problems/kth-distinct-string-in-an-array/
// Approach 1: Brute Force
// Time Complexity: O(N^2)
// Space Complexity: O(N)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> ans;
        bool found = 0;
        for (int i = 0; i < arr.size(); i++) {
            found = 0;
            for (int j = 0; j < arr.size(); j++) {
                if (i != j) {
                    if (arr[i] == arr[j]) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found == 0) {
                ans.push_back(arr[i]);
            }
        }
        string answer = "";
        int m = ans.size();
        if (k > m) {
            return answer;
        }
        answer = ans[k - 1];
        return answer;
    }
};
