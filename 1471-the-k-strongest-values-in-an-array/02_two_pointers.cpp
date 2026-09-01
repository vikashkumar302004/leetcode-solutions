#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size();
          sort(arr.begin(),arr.end());
        int mid=((n - 1) / 2);
      
        int mid2=arr[mid];
        vector<int>temp;
        // phele differnec array bana lo ek okay 
        for(auto x:arr){
            int diff=abs(x-mid2);
            temp.push_back(diff);
        }
        vector<int>ans;
        int start=0;int end=n-1;

        while(k){
            // two pointe rapproach:
            // sorted array hai so median se jo jitna dur hoga utna jayda differnec hoga 
            // sbse pehel end and a\start se check kro 
            // if end ka differnec jayda hai toh end -- krdo pysh krke and same for start jayda hai toh push krdo and start++ and equal hai toh end ko krdo minus push krek
            if(temp[start]<temp[end]){
                ans.push_back(arr[end]);
                k--;
                end--;
            }
            else if(temp[start]>temp[end]){
                ans.push_back(arr[start]);
                start++;
                k--;
            }
            else{
                ans.push_back(arr[end]);
                end--;k--;
            }

        }
        return ans;

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
