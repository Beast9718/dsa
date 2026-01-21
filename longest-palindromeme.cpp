#include<bits/stdc++.h>
using namespace std;
 int longestPalindrome(string s) {
        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    output += 2;
                    s.erase(j, 1);
                    s.erase(i, 1);
                    i--;
                    break;
                }
            }
        }
        if (s.empty())
            return output;
        else
            return output + 1;
    }
    int main(){
string s = "abccccdd";
cout<<longestPalindrome(s);

    }