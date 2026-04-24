class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        for(char x:s){
            freq[x]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto &[ch,cnt]:freq){
            pq.push({cnt,ch});
        }
string ans="";

        while(pq.size()>1){
            auto [cnt1,ch1]=pq.top();
             ans+=ch1;
             cnt1--;
            pq.pop();
            auto [cnt2,ch2]=pq.top();
            ans+=ch2;
            cnt2--;
            pq.pop();

            if(cnt1>0)pq.push({cnt1,ch1});
            if(cnt2>0)pq.push({cnt2,ch2});
        }
        if(pq.size()!=0){
            auto [cnt,ch]=pq.top();
            if(cnt>1)return "";
            ans+=ch;
            
        }
        return ans;
    }
};