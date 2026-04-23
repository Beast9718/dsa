class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<pair<int,int>>v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            if(a.second==b.second)return a.first>b.first;
            return a.second<b.second;
        });
        vector<int>output;
        for(auto &[num,cnt]:v){
            for(int i=0;i<cnt;i++){
                output.push_back(num);
            }
        }
        return output;
    }
};