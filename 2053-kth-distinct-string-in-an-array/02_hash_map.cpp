// Problem: 2053. Kth Distinct String in an Array
// Link: https://leetcode.com/problems/kth-distinct-string-in-an-array/
// Approach 2: Hash Map (Frequency Counter)
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        //phele map mai sbki frequency store krawayege
        for(auto x:arr){
            mp[x]++;
        }
        // phir hum chcek krlege kisi frequency 1 hai 
        for(auto x:arr){
            if(mp[x]==1){
                k--;
                //k-- krte rhege jab tk 0 na ho jaye 
                if(k==0){
                    return x;
                }
            }
            
        }
        return "";
        
    }
};
