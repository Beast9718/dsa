class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int studentindex = 0;
        int cookieindex = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (studentindex < g.size() && cookieindex < s.size()) {
            if (  s[cookieindex] >= g[studentindex]) {
                studentindex++;
               
            } 
            cookieindex++;
            
        }
        return studentindex;
    }
};