#include<bits/stdc++.h>
using namespace std;


int romanToInt(string s) {
        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i != s.length() - 1) {
                if (s[i] == 'I' && (s[i + 1] != 'V' && s[i + 1] != 'X')) {
                    output += 1;
                } else if (s[i] == 'I' &&
                           (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    output -= 1;
                } else if (s[i] == 'V') {
                    output += 5;
                }

                else if (s[i] == 'X' && (s[i + 1] != 'L' && s[i + 1] != 'C')) {
                    output += 10;
                } else if (s[i] == 'X' &&
                           (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    output -= 10;
                } else if (s[i] == 'L') {
                    output += 50;
                } else if (s[i] == 'C' &&
                           (s[i + 1] != 'D' && s[i + 1] != 'M')) {
                    output += 100;
                } else if (s[i] == 'C' &&
                           (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    output -= 100;
                } else if (s[i] == 'D') {
                    output += 500;
                } else if (s[i] == 'M') {
                    output += 1000;
                }
            }

            else {
                if (s[i] == 'I') {
                    output += 1;
                }

                else if (s[i] == 'V') {
                    output += 5;
                } else if (s[i] == 'X') {
                    output += 10;
                }

                else if (s[i] == 'L') {
                    output += 50;
                } else if (s[i] == 'C') {
                    output += 100;
                }

                else if (s[i] == 'D') {
                    output += 500;
                } else if (s[i] == 'M') {
                    output += 1000;
                }
            }
        }
        return output;
    }

    int main(){
string s="MCMXCIV";
cout<<romanToInt(s);

    }