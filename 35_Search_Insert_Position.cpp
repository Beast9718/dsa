#include <bits/stdc++.h>
using namespace std;

  int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = ( left + right ) / 2;
        int pos = -1;
        if ( target > nums[nums.size()-1]) return nums.size();
        else if ( target < nums[0] ) return 0;
        else if ( nums.size() == 1 && nums[0] == target ) return 0;
        else {
            while ( mid <= right ){
                if ( nums[mid] == target ) return mid;
                else if ( target < nums[mid] ){
                    if ( nums[mid-1] < target) return mid;
                    right = mid - 1;
                    mid = ( left + right ) / 2;
                }
                else {
                    if ( nums[mid+1] > target ) return mid + 1;
                    left = mid + 1;
                    mid = ( left + right ) / 2;
                }
            }
        }
        return pos;
    }

int main()
{
    vector<int>nums={1,3,5,6};
    int target=5;
    int result=searchInsert(nums,target);
    cout<<result;


}