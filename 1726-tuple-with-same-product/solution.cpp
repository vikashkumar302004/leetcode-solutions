// Problem: 1726. Tuple with Same Product
// Link: https://leetcode.com/problems/tuple-with-same-product/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        //phele pair find  kro
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                int answer=nums[i]*nums[j];
                mp[answer]++;
            }
        }
        int pairs=0;
        for(auto x:mp){
            if(x.second>1){
                //Agar k pairs hai and unhe mai 2 pairs chose lrne hai so total combination formula=k(k-1)/2
                //3 choose karne ke liye
// C(k,3) = k(k-1)(k-2)/6
// Agar k pairs mein se 4 pairs choose karne hain:
// Since 4! = 24:

// k * (k - 1) * (k - 2) * (k - 3) / 24
               int p=x.second*(x.second-1)/2;
                pairs+=p*8;
            }
        }
        return pairs;
        
        // T.C: O(N^2)
        // S.C: O(N^2) (for storing frequencies of N*(N-1)/2 pairs in map)
    }
};
