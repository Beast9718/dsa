 #include<bits/stdc++.h>
 using namespace std;
 int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;
        for (string s : sentences) {
            int word_count = 1;
            for (char c : s) {
                if (c == ' ') {
                    word_count += 1;
                }
            }
            if (word_count > max_words) {
                max_words = word_count;
            }
        }
        return max_words;
    }
    int main(){
        vector<string>sentences={"alice and bob love leetcode","i think so too","this is great thanks very much"};
        cout<<mostWordsFound(sentences);
    }