class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> res;
        vector<vector<int>> output;
        bool inserted = false;
        for (int i = 0; i < intervals.size(); i++) {
            if (inserted == false && intervals[i][0] > newInterval[0]) {
                inserted = true;
                res.push_back(newInterval);
            }
            res.push_back(intervals[i]);
        }
        if (inserted == false) {
            res.push_back(newInterval);
        }

        int start1 = res[0][0];
        int end1 = res[0][1];
        for (int i = 1; i < res.size(); i++) {
            int start2 = res[i][0];
            int end2 = res[i][1];
            if (start2 <= end1) {
                start1 = start1;
                end1 = max(end1, end2);
            } else {
                output.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }
        }
        output.push_back({start1, end1});
        return output;
    }
};