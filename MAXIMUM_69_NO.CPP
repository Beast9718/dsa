#include <bits/stdc++.h>
using namespace std;

int maximum69Number (int num){
string s=to_string(num);
for(int i=0;i<s.length();i++){
if(s[i]=='6'){
s[i]='9';
break;
}
}
return stoi(s);
}

int main()
{
int num=9669;
int result=maximum69Number(num);
cout<<result;
}