// Problem: 324. Wiggle Sort II
// Link: https://leetcode.com/problems/wiggle-sort-ii/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        //Sorted array ko 2 parts mein todke, dono parts ko ulta consume karke alternate positions fill karna.
         vector<int>temp;
         sort(nums.begin(),nums.end());
         for(auto x:nums){
            temp.push_back(x);
         }
         int i;
         if(nums.size()%2==0){
            i=nums.size()/2-1;
         }
         else{
             i=nums.size()/2;
         }
    
        int j=nums.size()-1;
        

        
        for(int k=0;k<nums.size();k++){
            if(k%2==0){
                nums[k]=temp[i];
                i--;
            }
            else{
                nums[k]=temp[j];
                j--;
            }
        }

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
