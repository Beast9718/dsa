 #include<bits/stdc++.h>
 using namespace std;
 string firstPalindrome(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {
            string rev = "";
            for (int j = words[i].size() - 1; j >= 0; j--) {
                rev += words[i][j];
            }
            if (words[i] == rev) {
                return rev;
            }
        }
        return "";
    }
    int main(){
      vector<string> words={"abc","car","ada","racecar","cool"} ;
      cout<<firstPalindrome(words);
    }