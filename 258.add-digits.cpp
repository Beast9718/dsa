 #include<bits/stdc++.h>
 using namespace std;

 int addDigits(int num) {

        while (num >= 10) {
            int result = 0;
            while (num > 0) {
                result += num % 10;
                num = num / 10;
            }
            num = result;
        }

        return num;
    }
    int main(){
        int num=12345;
        cout<<addDigits(num);
    }