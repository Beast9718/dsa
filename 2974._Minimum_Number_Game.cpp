   #include<bits/stdc++.h>
   using namespace std;
   
   vector<int> numberGame(vector<int>& nums) {
        vector<int> output={};
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            
            output.push_back(nums[i+1]);
            output.push_back(nums[i]);
        }

  return output;  }

  int main(){
    vector<int>nums={3,2,5,4,1,6};
    vector<int>result=numberGame(nums);
    for(int x:result){
        cout<<x<<" ";
    }
  }