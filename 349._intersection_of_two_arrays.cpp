#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result = {};
        
        if (nums1.size() >= nums2.size()) {
            for (int i = 0; i < nums1.size() ; i++) {
                for (int j = 0; j < nums2.size(); j++) {
                    if (nums1[i] == nums2[j]) {
                        result.insert(nums1[i]);
                       
                    } else {
                        continue;
                    }
                }

            }

        } else {
            for (int i = 0; i < nums2.size(); i++) {
                for (int j = 0; j < nums1.size(); j++) {
                    if (nums2[i] == nums1[j]) {
                        result.insert(nums2[i]);
                     
                    } else {
                        continue;
                    }
                }
            }
        }
        vector<int> output(result.begin(),result.end());
        return output;
    }

    int main(){
       vector<int> nums1 = {4,9,5};
        vector<int> nums2 ={9,4,9,8,4};
        vector<int> ans=intersection(nums1,nums2);
        for(int x:ans){
            cout<<x<<" ";
        }





    }