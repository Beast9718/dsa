#include <bits/stdc++.h>
using namespace std;

 int arrangeCoins(int n) {
        long long x=0;
        long long temp=0;
        for(int i=1;i<9;i++){
            temp+=n;
        }
        x+=(-1+sqrt(1+temp))/2;
        return x;
         
    }

int main()
{
    int n=7;
    int result=arrangeCoins(n);
    cout<<result;

}