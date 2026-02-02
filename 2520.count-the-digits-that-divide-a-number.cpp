 #include<bits/stdc++.h>
 using namespace std;
 int countDigits(int num) {
        int output = 0;
        int x = num;
        while (num != 0) {
            int digit = num % 10;
            if (digit != 0 && x % digit == 0) {
                output += 1;
            }
            num = num / 10;
        }
        return output;
    }
    int main(){
        int num=121;
        cout<<countDigits(num);
    }