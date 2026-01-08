#include <bits/stdc++.h>
using namespace std;

 bool isSubsequence(string s, string t) {
        int temp=0;
        int j=0;
        int i=0;
        if(s.length()==0) return true;
        for(i;i<t.size();i++){
            
            if(t[i]==s[j]){
                temp++;
                j++;

                 
            }
            if(temp==s.length())return true;


}

  return false;  }


int main()
{
   string s = "abc";
   string t = "ahbgdc";
   bool result=isSubsequence(s,t);
   cout<<result;


}