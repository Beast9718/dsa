class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int maxEnding=nums[0];
        int minEnding=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=maxEnding*nums[i];
            int v2=minEnding*nums[i];
            int v3=nums[i];
            
            maxEnding=max(v1,max(v2,v3));
            minEnding=min(v1,min(v2,v3));
            ans=max(ans,maxEnding);
        }
        return ans;

    }
};