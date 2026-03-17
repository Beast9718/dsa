class Solution {
public:
    int findTheWinner(int n, int k) {
      vector<int>nums;
      for(int i=1;i<n+1;i++){
        nums.push_back(i);
      }
      int j=0;
      while(nums.size()!=1){
        j=(j+k-1)%nums.size();
        nums.erase(nums.begin()+j);
        
      }
      return nums[0];
    }
};