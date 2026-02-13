  #include<bits/stdc++.h>
  using namespace  std;
  string toLowerCase(string s) {
        string output="";
        for(int i=0;i<s.length();i++){
           if(s[i]>='A' && s[i]<='Z'){ output.push_back(char(((int )s[i])+32));}
           else{ output.push_back(char((int )s[i]));}
        }
    return output;}
    int main(){
        string s="HEllo";
        cout<<toLowerCase(s);
    }