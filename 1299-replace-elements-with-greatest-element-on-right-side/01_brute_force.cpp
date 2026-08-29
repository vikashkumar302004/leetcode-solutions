// Problem: 1299. Replace Elements with Greatest Element on Right Side
// Link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>b;
        if(arr.size()==1){
            b.push_back(-1);
            return b;
        }
        for(int i=0;i<arr.size()-1;i++){
            int max=INT_MIN;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            b.push_back(max);
        }
        b.push_back(-1);
        return b;
        
        // T.C: O(N^2)
        // S.C: O(N)
    }
};
