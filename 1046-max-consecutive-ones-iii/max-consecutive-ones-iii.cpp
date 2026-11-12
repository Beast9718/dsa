class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int lo=0;
        int ans=INT_MIN;
        vector<int>f(2,0);
        for(int hi=0;hi<nums.size();hi++){
            f[nums[hi]]++;
            int len=hi-lo+1;
            while(f[0]>k){
                f[nums[lo]]--;
                lo++;
                len=hi-lo+1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};