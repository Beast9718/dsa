#include<bits/stdc++.h>
using namespace std;
bool checkIfPangram(string sentence) {
        set<char> unique(sentence.begin(), sentence.end());

        if (unique.size() == 26)
            return true;
        else
            return false;
    }

    int main(){
        string sentence="thequickbrownfoxjumpsoverthelazydog";
        cout<<checkIfPangram(sentence);
    }