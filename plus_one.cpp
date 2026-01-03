#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    if (digits[digits.size() - 1] != 9)
    {
        digits[digits.size() - 1] += 1;
    }
    else
    {
        int ptr = digits.size() - 1;
        while (digits[ptr] == 9 && ptr > 0)
        {
            digits[ptr] = 0;
            ptr--;
        }
        if (digits[ptr] == 9 && ptr == 0)
        {
            digits[ptr] = 0;
            digits.insert(digits.begin(), 1);
        }
        else
        {
            digits[ptr] += 1;
        }
    }

    return digits;
}

int main()
{
    vector<int> digits = {1, 2, 3};
    digits = plusOne(digits);
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << " ";
    }
}