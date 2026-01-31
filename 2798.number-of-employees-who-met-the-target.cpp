#include<bits/stdc++.h>
using namespace std;
int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int output = 0;
        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) {
                output += 1;
            }
        }
        return output;
    }
    int main(){
        vector<int>hours={5,1,4,2,2};
        int target=5;

        cout<<numberOfEmployeesWhoMetTarget(hours,target);
    }