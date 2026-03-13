class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>count;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                      cnt+=1;
            }
            if(nums[i]!=1 || i==nums.size()-1){
                count.push_back(cnt);
                cnt=0;
            }
        }
        return *max_element(count.begin(),count.end());
    }
};