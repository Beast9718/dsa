 #include<bits/stdc++.h>
 using namespace std;
 
 int lengthOfLastWord(string s) {
        int output=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                continue;
            }
            else if(i>0){
            
            if(s[i]!=' ' && s[i-1]==' '){
                output+=1;
                break;
            }
            else{output+=1;}


            }
            else{output+=1;}



        }
  return output;  }

  int main(){

    string s="   fly me   to   the moon  ";
    cout<<lengthOfLastWord(s);
  }