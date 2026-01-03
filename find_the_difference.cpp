
#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t) {
        int sum_t=0;
        int sum_s=0;
            for(int i=0;i<t.length();i++){
                sum_s+=s[i];
                sum_t+=t[i];
            }
           int diff=sum_t-sum_s;
           return char(diff);
        
    }

int main()
{
 string s="abcd";
 string t="abcde";
 char result=findTheDifference(s,t);
 cout<<result;
}