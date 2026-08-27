// Problem: 2418. Sort the People
// Link: https://leetcode.com/problems/sort-the-people/

#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>>mp;
        // descending order mai krlo store heights map mai and us according print krdo names
        vector<string>ans;
        for(int i=0;i<heights.size();i++){
            string temp=names[i];
            mp[heights[i]]=temp;
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
        //T.C O(N log N)
    }
};
