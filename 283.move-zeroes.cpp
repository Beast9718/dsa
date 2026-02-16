#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        vector<int> output={};
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                output.push_back(nums[i]);
            }
            
        }
        for(int i=0;i<nums.size();i++){
            if( nums[i]==0){output.push_back(nums[i]);}
        }
   
     nums=output;
     
    }
    int main(){
vector<int>nums={0,1,0,3,12};
moveZeroes(nums);
for(auto  i:nums){
    cout<<i<<" ";
}

    }
