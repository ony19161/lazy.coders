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
    string value[] = {"11121"};
    string val = value[0];
    unsigned int index1 = 0;
    unsigned int index2 = index1 + 1;
    unsigned int index3 = index2 + 1;
    unsigned int index4 = index3 + 1;

    // The result is 00001010
    char ipAddress = val[index1];
    strcat(&ipAddress, ".");
    // ipAddress = ipAddress + value[index2] + "." + value[index3] + "." + value[index4];
    cout << "IP = " << ipAddress << endl;

    return 0;
}