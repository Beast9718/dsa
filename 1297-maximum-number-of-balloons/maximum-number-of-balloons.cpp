class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        string s="balloon";
        int res=INT_MAX;
        unordered_map<char,int>need={{'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
        for(char c:text){
            mp[c]++;
        }
        for(char c:s){
            res=min(res,mp[c]/need[c]);
        }
        return res;
    }
};