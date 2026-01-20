#include<bits/stdc++.h>
using namespace std;
int findNumbers(vector<int>& nums) {
        int output = 0;
        for (int i = 0; i < nums.size(); i++) {
            string temp = to_string(nums[i]);

            if (temp.length() % 2 == 0) {
                output += 1;
            }
        }
        return output;
    }
    int main(){
        vector<int>nums={12,345,2,6,7896};
        cout<<findNumbers(nums);
    }