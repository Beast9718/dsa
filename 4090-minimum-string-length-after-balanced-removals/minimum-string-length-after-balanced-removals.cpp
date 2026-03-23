class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int output=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') output+=1;
            if(s[i]=='b') output-=1;
        }
     if(output>0)return output;
     else return -output;
    }
};