class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>output;
        for(int i=0;i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
            }
            output.push_back(wealth);
        }
        return *max_element(output.begin(),output.end());
    }
};