#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

/*
    Problem Link: shorturl.at/FHOPZ
*/

vector<string> genIp(string &s)
{
    // Your code here
    vector<string> list;
    return list;
}

int main()
{
    vector<int> arr{ 1, 2, 3, 4, 5, 6 };
    int d = 4;
    int n = arr.size();
    vector<int> result;
    for (int i = d; i < n; i++) {
        result.push_back(arr.at(i));
    }
    for (int j = 0; j < d; j++) {
        result.push_back(arr.at(j));
    }
    
    for (auto it = result.begin(); it != result.end(); ++it)
        cout << ' ' << *it;

    return 0;
}