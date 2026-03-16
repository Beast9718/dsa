class Solution {
public:
    string stringHash(string s, int k) {
        string result="";
        int size=s.length();
        for(int i=0;i<size;i+=k){
            int n=0;
            
            for(int j=i;j<i+k;j++){
             n+=s[j]-'a';
                
            }
                 result+=char(97+(n%26));
        }
        return result;
    }
};