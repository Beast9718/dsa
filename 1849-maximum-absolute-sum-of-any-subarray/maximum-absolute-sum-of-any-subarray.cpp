class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding=nums[0];
        int minEnding=nums[0];
        int ans=abs(nums[0]);
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=nums[i]+maxEnding;
            int v3=nums[i]+minEnding;
            maxEnding=max(v1,max(v2,v3));
            minEnding=min(v1,min(v2,v3));
            ans=max(ans,max(abs(maxEnding),abs(minEnding)));
        }
        return ans;
    }
};