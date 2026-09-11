// Problem: 890. Find and Replace Pattern
// Link: https://leetcode.com/problems/find-and-replace-pattern/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;int found=0;
        // phele answer vector bnalo string type ki
        for(int i=0;i<words.size();i++){
            int j=0;found=0;string temp=words[i];
            while(j<pattern.size()){
                // how its works
                //a ka phela index=0 ,a=0,
                //b=1,b=1,
                //c=2,b=1 so abc not counted
                if(pattern.find(pattern[j])==temp.find(temp[j])){
                    j++;
                }else{
                    found=1;
                    break;
                }
            }
            if(found==0){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
