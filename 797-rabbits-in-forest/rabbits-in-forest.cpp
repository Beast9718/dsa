class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> freq;
        for(int x: answers){
            freq[x]++;
        }
        int ans=0;
        for(auto &[x,count]:freq){
            int groupsize=x+1;
            int groups=(count+groupsize-1)/groupsize;
            ans+=groups*groupsize;
        }
        return ans;
    }
};