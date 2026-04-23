class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char x: s){
            freq[x]++;
        }
        
       vector<pair<char,int>>v(freq.begin(),freq.end());
       sort(v.begin(),v.end(), [](auto &a,auto &b){return a.second>b.second;});
       string ans="";
        for(auto &[ch,count]:v){
        ans+=string(count,ch);
    }
    return ans;
    }
    
};