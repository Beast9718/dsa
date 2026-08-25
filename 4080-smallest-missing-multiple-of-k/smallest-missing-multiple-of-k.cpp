class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0)s.insert(nums[i]);
            else continue;
        }
        
        int i=1;
        for(int n:s){
            if(n!=k*i){return k*i;}
            else i++;
        }return k*i;
    }
};