class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> map;
        for (int i = 0; i < responses.size(); i++) {

            set<string> s(responses[i].begin(), responses[i].end());
            for (auto str : s) {
                map[str]++;
            }
        }
        string str = "";
        int max_cnt = 0;
        for (auto it : map) {
            if (it.second > max_cnt) {
                str = it.first;
                max_cnt = it.second;
            } else if (it.second == max_cnt && it.first < str) {
                str = it.first;
            }
        }
        return str;
    }
};