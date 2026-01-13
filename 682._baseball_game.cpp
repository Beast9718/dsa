#include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string> &operations)
{
    vector<int> v;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] != "C" && operations[i] != "D" &&
            operations[i] != "+")
        {
            v.push_back(stoi(operations[i]));
        }
        else if (operations[i] == "C")
        {
            v.erase(v.begin() + i);
        }
        else if (operations[i] == "D")
        {
            v.push_back(v[v.size() - 1] * 2);
        }
        else
        {
            v.push_back(v[v.size() - 1] + v[v.size() - 2]);
        }
    }
    int temp = 0;
    for (int i = 0; i < v.size(); i++ )
    {
        temp += v[i];
    }
    return temp;
}

int main()
{

    vector<string> operations = {"5", "2", "C", "D", "+"};
    cout << calPoints(operations);
}