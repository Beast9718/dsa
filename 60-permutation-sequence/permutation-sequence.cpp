class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>nums;
        for(int i=1;i<n+1;i++){
            fact*=i;
            nums.push_back(i);
        }
         int grp=fact/nums.size();
        k=k-1;
        string ans="";
        while(true){
           
            ans=ans+to_string(nums[k/grp]);
            nums.erase(nums.begin()+k/grp);
            if(nums.size()==0){break;}
            k=k%grp;
            grp=grp/nums.size();
        }
        return ans;
    }
};