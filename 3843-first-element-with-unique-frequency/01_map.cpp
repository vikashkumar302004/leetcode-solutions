#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        //phele har element ki frequncy store kro 
        map<int,int>mp;
        for(auto x:nums){
           
            mp[x]++;
        }
        //ahr element ki frequency ki frequency bhi store kro 
        map<int,int>mp2;
        
        for(auto x:mp){
            mp2[x.second]++;
            
            }
        int answer = 0;
        for(int i=0;i<nums.size();i++){
            // check krlo ki jis element ki frequency ki freuqncy 1 tlb unique ho toh return rkdo vrna -1 krdo
            if(mp2[mp[nums[i]]]==1){
                answer=nums[i];
               return answer;
            }
        }
        return -1;

        // T.C: O(N log U)
        // S.C: O(U)
    }
};
