   #include<bits/stdc++.h>
   using namespace std;
   int numWaterBottles(int numBottles, int numExchange) {
        int filled = numBottles;
        int ex = numExchange;
        int empty = numBottles;

        while (empty >= ex) {
            int newBottles = empty / ex;
            filled += newBottles;
            empty = (empty % ex) + newBottles;
        }

        return filled;
    }
    int main(){
        int numBottles=10;
        int numExchange=3;
        cout<<numWaterBottles(numBottles,numExchange);

    }