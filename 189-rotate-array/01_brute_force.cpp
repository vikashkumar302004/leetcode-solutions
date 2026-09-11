// Problem: 189. Rotate Array
// Link: https://leetcode.com/problems/rotate-array/

#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int m=0;
        if(k>0){
        m=nums.size()%k;}

        if(m<k){
        
            m=k;
        }
        int temp=nums[nums.size()-1];
        while(m){
            for(int i=nums.size()-1;i>0;i--){
                nums[i]=nums[i-1];
            }
            nums[0]=temp;
            temp=nums[nums.size()-1]; 
            m--;


        }
        
        // T.C: O(N * K) (Gives TLE)
        // S.C: O(1)
    }
};
