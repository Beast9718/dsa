class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        long long total=0;
        long long sum_s=0;
        
        for(int i=0;i<nums.size()+1;i++){
            total+=i;}
            for(auto it:s){
                sum_s+=it;
            }
return total-sum_s;
    }
};