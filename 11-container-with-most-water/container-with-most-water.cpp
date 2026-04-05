class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        vector<int> ans;
        while (l < r) {
            ans.push_back(min(height[l], height[r]) * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return *max_element(ans.begin(), ans.end());
    }
};