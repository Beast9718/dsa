class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<double> averages = {};
        for (int i = 0; i < nums.size() / 2; i++) {
            double avg = (nums[i] + nums[nums.size() - 1 - i]) / 2.0;
            averages.push_back(avg);
        }
        sort(averages.begin(), averages.end());
        return averages[0];
    }
};