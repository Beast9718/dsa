class Solution {
public:
    vector<vector<int>> powerset;
    void generate(vector<int>& subset, int i, vector<int>& nums) {
        if (i == nums.size()) {
            powerset.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        generate(subset, i + 1, nums);
        subset.pop_back();

        while (i + 1 < nums.size() && nums[i] == nums[i + 1])
            i++;

        generate(subset, i + 1, nums);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> subset;
        int i = 0;
        generate(subset, i, nums);
        return powerset;
    }
};
