class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> str;
        unordered_map<char, string> p2s;
        unordered_map<string, char> s2p;
        string temp = "";
        for (char c : s) {
            if (c == ' ') {
                if (!temp.empty()) {
                    str.push_back(temp);
                    temp = "";
                }

            } else {
                temp += c;
            }
        }
        if (!temp.empty()) {
            str.push_back(temp);
        }
        if(pattern.size()!=str.size())return false;
        else{
            for(int i=0;i<str.size();i++){
                char p=pattern[i];
                string w=str[i];
                if(p2s.count(p) && p2s[p]!=w)return false;
                if(s2p.count(w) && s2p[w]!=p)return false;
                p2s[p]=w;
                s2p[w]=p;
            }
            return true;
        }
        
    }
};