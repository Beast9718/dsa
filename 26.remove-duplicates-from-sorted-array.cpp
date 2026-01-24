 #include<bits/stdc++.h>
  using namespace std;
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        
        nums.clear();
        for(int x:s){
            nums.push_back(x);
        }
   return nums.size(); }

   int main(){
vector<int>nums={0,0,1,1,1,2,2,3,3,4};
cout<<removeDuplicates(nums);

   }