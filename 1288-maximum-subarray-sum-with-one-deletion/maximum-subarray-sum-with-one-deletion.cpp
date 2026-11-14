class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int oneDelete=0;
        int noDelete=arr[0];
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            int prevOneDelete=oneDelete;
            int prevNoDelete=noDelete;
            noDelete=max(noDelete+arr[i],arr[i]);
            oneDelete=max(prevNoDelete,prevOneDelete+arr[i]);
            ans=max(ans,max(oneDelete,noDelete));
        }
        return ans;
    }
};