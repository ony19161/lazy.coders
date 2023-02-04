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
    // a = 5(00000101), b = 9(00001001)
    unsigned int a = 6, b = 9;

    // The result is 00001010
    cout << "a<<1 = " << (a >> 1) << endl;

    // The result is 00010010
    cout << "b<<1 = " << (b << 1) << endl;
    return 0;
}