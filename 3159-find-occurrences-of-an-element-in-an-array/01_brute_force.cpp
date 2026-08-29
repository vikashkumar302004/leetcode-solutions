// Problem: 3159. Find Occurrences of an Element in an Array
// Link: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;int count=0;int temp=0;bool found=0;

        for(int i=0;i<queries.size();i++){
            count=queries[i]; found=0;

            temp=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==x){
                    temp++;

                }
                if(temp==count){
                    temp=j;
                    found=1;
                    break;
                }

            }
            if(found){
                ans.push_back(temp);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
        
        // T.C: O(Q * N) where Q = queries.size(), N = nums.size()
        // S.C: O(Q)
    }
};
