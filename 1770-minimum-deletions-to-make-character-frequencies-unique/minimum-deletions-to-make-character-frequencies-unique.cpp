class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        int ans=0;
        set<int>used;
        for(auto &[ch,cnt]:freq){
            while(cnt>0 && used.count(cnt)){
                cnt--;
                ans++;
            }
            used.insert(cnt);
        }
        return ans;
        
    }
};