class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int result=0;
        int min_diff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int diff=abs(target-sum);
                if(diff==0){
                    return target;
            }
                if(diff<min_diff){min_diff=diff;result=sum;}
                else if(sum<target){
                    j++;
                }
                else {k--;}

            }
        }
        return result;
    }
};