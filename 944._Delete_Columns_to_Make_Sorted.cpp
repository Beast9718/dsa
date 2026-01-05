#include <bits/stdc++.h>
using namespace std;

 int minDeletionSize(vector<string>& strs) {
        int count=0;
        
        for(int i=0;i<strs[0].length();i++){
                
            for(int j=0;j<strs.size()-1;j++){
                if(int(strs[j][i])>int(strs[j+1][i])){
                    count++;
                    break;


                }

            }
            
            
           }
           
          return count;
           
        }

int main()
{
vector<string>input={"cba","daf","ghi"};
int output=minDeletionSize(input);
cout<<output;

}