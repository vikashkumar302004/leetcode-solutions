// Problem: 1299. Replace Elements with Greatest Element on Right Side
// Link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxium=arr.back();
        //yeh last element nikal kr dega okay
        vector<int>ans;
        ans.push_back(-1);
        for(int i=arr.size()-2;i>=0;i--){
            maxium=max(maxium,arr[i+1]);
            ans.push_back(maxium);
            //Tip: Always dry run your question
        }
        int n=arr.size();
        reverse(ans.begin(),ans.end());

       
        return ans;
        
        // T.C: O(N)
        // S.C: O(N)
    }
};
