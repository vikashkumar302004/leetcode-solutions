// Problem: 1299. Replace Elements with Greatest Element on Right Side
// Link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        if(arr.size()==1){
            ans.push_back(-1);
            return ans;
        }
        for(int i=1;i<arr.size();i++){
            int maxium=*max_element(arr.begin()+i,arr.end());
            ans.push_back(maxium);
        }
        ans.push_back(-1);
        return ans;
        
        // T.C: O(N^2)
        // S.C: O(N)
    }
};
