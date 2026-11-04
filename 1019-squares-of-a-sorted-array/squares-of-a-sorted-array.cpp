class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)pos++;
            nums[i]*=nums[i];
        }
        int i=pos-1;int j=pos;int id=0;
        vector<int>output;
        while(i>=0 && j<nums.size()){
            if(nums[i]<=nums[j]){
                output.push_back(nums[i]);
                i--;
                id++;
            }
            else{output.push_back(nums[j]);
            j++;
            id++;}
        }
        while(j<nums.size()){
            output.push_back(nums[j]);
            j++;
            id++;
        }
        while(i>=0){
            output.push_back(nums[i]);
            i--;
            id++;
        }
        return output;
    }
};