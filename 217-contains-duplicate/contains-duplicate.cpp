class Solution {
    
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<pair<int,int>>v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        if(v[0].second>1)return true;
        else return false;
    }
};