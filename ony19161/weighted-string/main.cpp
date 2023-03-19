#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

/*
    Problem Link: https://rb.gy/gebfuo
*/

vector<string> weightedUniformStrings(string s, vector<int> queries)
{
    vector<string> results;
    vector<int> weights;
    int stringWeight = 0;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != s[i + 1])
        {
            stringWeight = stringWeight + (s[i] - 97) + 1;
            weights.push_back(stringWeight);
            stringWeight = 0;
        }
        else
        {
            stringWeight = stringWeight + (s[i] - 97) + 1;
            weights.push_back(stringWeight);
        }
    }
    for (unsigned int i = 0; i < queries.size(); i++)
    {
        if (find(weights.begin(), weights.end(), queries[i]) != weights.end())
        {
            results.push_back("Yes");
        }
        else
        {
            results.push_back("No");
        }
    }

    return results;
}

int main()
{

    // string password = "4700";
    string password = "Ab1";
    string value = "abbcccdddd";
    vector<int> queries;
    queries.push_back(1);
    queries.push_back(7);
    queries.push_back(5);
    queries.push_back(4);
    queries.push_back(15);

    vector<string> results = weightedUniformStrings(value, queries);

    for (unsigned int i = 0; i < results.size(); i++)
    {
        cout << results[i] << " ";
    }
    // cout << value << endl;

    return 0;
}