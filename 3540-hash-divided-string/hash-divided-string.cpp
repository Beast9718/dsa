class Solution {
public:
    string stringHash(string s, int k) {
        string result="";
        int size=s.length();
        int sum=0;
        int n=0;
        for(int i=0;i<size/k;i++){
            sum=0;
            
            for(int j=0;j<k;j++){
             sum+=s[n]-'a';
             n++;
                
            }
                 result+=char(97+(sum%26));
        }
        return result;
    }
};