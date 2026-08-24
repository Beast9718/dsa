class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(char c='a';c<='z';c++)mp[c]=0;
        for(char c:s)mp[c]++;
        for(char c:t)mp[c]--;
        for(auto [key,value]:mp){
            if (value!=0)return false;
        }
        return true;
    }
};