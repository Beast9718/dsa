class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> countMap;
        vector<int> output;
        for (int num : nums) {
            countMap[num]++;
        }
        vector<pair<int, int>> freqList(countMap.begin(), countMap.end());
        sort(freqList.begin(), freqList.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });
        int i = 0;
        while (k != 0) {

            output.push_back(freqList[i].first);
            i++;
            k--;
        }
        return output;
    }
};