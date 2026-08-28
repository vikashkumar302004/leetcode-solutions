// Problem: 1619. Mean of Array After Removing Some Elements
// Link: https://leetcode.com/problems/mean-of-array-after-removing-some-elements/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double trimMean(vector<int>& arr) {
        // remember 
//  int sum = 10;
// int n = 4;
// double ans = sum / n;
// Yahan:
// sum / n
// 10 / 4
// Dono int hain, isliye C++ karega integer division:
// 10 / 4 = 2
// Phir:
// double ans = 2;
// So ans banega:
//2.0
        int ans=arr.size();
        int k=(5*ans)/100;
        // sort the array 
        //int / int   → integer division ❌
// double / int    → decimal division ✅
// int / double    → decimal division ✅
// double / double → decimal division ✅
        sort(arr.begin(),arr.end());
        arr.erase(arr.begin(),arr.begin()+k);
        reverse(arr.begin(),arr.end());
        arr.erase(arr.begin(),arr.begin()+k);
        double sum=0;
        int count=0;
        for(auto x:arr){
            count++;
            sum+=x;

        }
        double answer=sum/count;
        return answer;
        // T.C: O(N log N)
    }
};
