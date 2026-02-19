class Solution {
public:
    int countBinarySubstrings(string s) {
       int i=0;
       int result=0;
       while(i<s.length()){
        int num_0=0;
        int num_1=0;
        if(s[i]=='0'){
            while(s[i]!='1'&&i<s.length()){
                num_0++;
                i++;

            }
            int j = i;
            while(s[j]!='0'&&j<s.length()){
                num_1++;
                j++;
            }
            result+=min(num_0,num_1);
        }
        else{
            while(s[i]!='0'&&i<s.length()){
                num_1++;
                i++;

            }
            int j = i;
            while(s[j]!='1'&&j<s.length()){
                num_0++;
                j++;
            }
            result+=min(num_0,num_1);
        }
       } 
       return result;
    }
};