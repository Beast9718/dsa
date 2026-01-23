 #include<bits/stdc++.h>
 using namespace std;
 int absDifference(vector<int>& nums, int k) {
        if(nums.size()<k) return 0;
        sort(nums.begin(),nums.end());
        int output=0;
        for(int i=0;i<k;i++){
            output-=nums[i];
            }
             for(int i=nums.size()-k;i<nums.size();i++){
            output+=nums[i];
            }
   return output; }

   int main(){
    vector<int>nums={5,2,2,4};
    int k=2;
    cout<<absDifference(nums,k);
   }