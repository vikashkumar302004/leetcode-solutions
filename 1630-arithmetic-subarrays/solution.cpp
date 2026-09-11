// Problem: 1630. Arithmetic Subarrays
// Link: https://leetcode.com/problems/arithmetic-subarrays/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int i=0;vector<int>temp;vector<bool>ans;
        int found=0;
        int m=l.size();

        while(i<m){
            for(int j=l[i];j<=r[i];j++){
                found=0;
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            int diff=temp[1]-temp[0];
            for(int k=1;k<temp.size();k++){
                if((temp[k]-temp[k-1])!=diff){
                    found=1;
                    break;
                }
            }
            if(found){
                ans.push_back(false);

            }
            else{
                ans.push_back(true);
            }
            temp.clear();
            i++;

            }
        return ans;
        
        // T.C: O(m * K log K), where m = l.size() and K is the length of subarray (r[i] - l[i] + 1)
        // S.C: O(K) for storing subarray elements in temp
    }
};
