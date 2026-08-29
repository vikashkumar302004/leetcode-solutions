// Problem: 3159. Find Occurrences of an Element in an Array
// Link: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                pos.push_back(i);
            }
        }
        vector<int>ans;
        for(int q:queries){
            if(q<=pos.size()){
                ans.push_back(pos[q-1]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
        
        // T.C: O(N + Q) where N = nums.size(), Q = queries.size()
        // S.C: O(K + Q) where K = count of x
    }
};
