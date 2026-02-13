 #include<bits/stdc++.h>
 using namespace std;
 int xorOperation(int n, int start) {
        vector<int>nums={};
        for(int i=0;i<n;i++){
            nums.push_back(start+2*i);
        }
        int XOR=0;
        for(int i=0;i<n;i++){
            XOR^=nums[i];
        }
   return XOR; }
   int main(){
    int n=7;
    int start=0;
    cout<<xorOperation(n,start);
   }