class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans={0};
        for(int i=1;i<n+1;i++){
            int cnt=0;
            int m=i;
            while(m>0){
                if(m%2!=0)cnt++;
                m/=2;
            }
            ans.push_back(1*cnt);
        }
        return ans;
    }
};