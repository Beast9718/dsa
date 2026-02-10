 #include<bits/stdc++.h>
 using namespace std;
 int differenceOfSum(vector<int>& nums) {
        int elsum=0;
        int digsum=0;
        for(int i=0;i<nums.size();i++){
            elsum+=nums[i];
           while(nums[i]>0){ int digit=nums[i]%10;
            nums[i]=nums[i]/10;
            digsum+=digit;   
            }
            
        }
        if(elsum-digsum>=0)return elsum-digsum;
        else return -(elsum-digsum);

    }
    int main(){
        vector<int>nums={1,15,6,3};
        cout<<differenceOfSum(nums);
    }