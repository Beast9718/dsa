 #include<bits/stdc++.h>
 using namespace std;
 int sumOfMultiples(int n) {
        int output = 0;
        for (int i = 1; i < n + 1; i++) {
            if (i % 3 == 0 || i % 7 == 0 || i % 5 == 0) {
                output += i;
            }
        }
        return output;
    }
    int main(){
        int n=9;
        cout<<sumOfMultiples(n);
    }