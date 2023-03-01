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

    string res = "";
    res.append(s, 1, 1);

    std::cout << stoi(res) << endl;
    res.append(".");
    res.append(s, 2, 1);
    std::cout << "Concatenated String:" << endl;
    std::cout << res << endl;

    return list;
}

int main()
{
    string value = "19268";
    unsigned int index1 = 0;
    unsigned int index2 = index1 + 1;
    unsigned int index3 = index2 + 1;
    unsigned int index4 = index3 + 1;

    // The result is 00001010
    string str1 = "", str2 = "";

    // cout << res << endl;
    vector<string> list = genIp(value);

    return 0;
}