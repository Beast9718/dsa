class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>output;
        
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){output.insert({nums[i],nums[j],nums[k]});
                j++;k--;}
                else if(sum<0)j++;
                else k--;
            }
        }
        return vector<vector<int>>(output.begin(),output.end());
    }
};