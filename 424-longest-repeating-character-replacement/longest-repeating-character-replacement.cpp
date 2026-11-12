class Solution {
public:
    int characterReplacement(string s, int k) {
        int lo=0;
        vector<int>f(256,0);
        int ans=INT_MIN;
        int max_cnt=0;
        for(int hi=0;hi<s.length();hi++){
            f[s[hi]]++;
            
                max_cnt=max(max_cnt,f[s[hi]]);
            
            int len=hi-lo+1;
            int diff=len-max_cnt;
            while(k<diff){
                f[s[lo]]--;
                lo++;
                len=hi-lo+1;
                diff=len-max_cnt;
            }
            ans=max(ans,len);
           
        }
        return ans;
    }
};