class Solution {
public:
vector<string>valid;
void generate(int open,int close,string &s){
    if(open>0){
        s.push_back('(');
        generate(open-1,close,s);
        s.pop_back();
    }
    if(close>0){
        if(open<close){s.push_back(')');
        generate(open,close-1,s);
        s.pop_back();}
    }
    if(open==0 && close==0)valid.push_back(s);
    return;
}
    vector<string> generateParenthesis(int n) {
        string s;
        generate(n,n,s);
        return valid;
    }
};
