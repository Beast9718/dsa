#include<bits/stdc++.h>
using namespace std;
vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> output={};
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(words[i][j]==x){
                    output.push_back(i);
                    break;
                }
            }
        }
        return output;
    }
    int main(){
        vector<string>words={"abc","bcd","aaaa","cbc"};
        char x='a';
        vector<int>result=findWordsContaining(words,x);
        for(auto i:result){
            cout<<i<<" ";
        }
    }