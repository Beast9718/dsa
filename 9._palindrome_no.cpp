  #include<bits/stdc++.h>
  using namespace std;
  
  bool isPalindrome(int x) {
       string y=to_string(x);
       string palindrome="";
   
       for(int i=y.length()-1;i>=0;i--){
        palindrome+=y[i];
       }
   
       if(palindrome==y)return true;
       else return false;
    }

    int main(){
        int x=121;
        cout<<isPalindrome(x);
    }