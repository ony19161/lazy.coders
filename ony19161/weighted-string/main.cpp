  #include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



/*
	Problem Link: https://rb.gy/gebfuo
*/

vector<string> weightedUniformStrings(string s, vector<int> queries) {

}

int main()
{

    vector<int> myvector;
    
    //string password = "4700";
    string password = "Ab1";
    string value = "abccddde";
    int stringWeight = 0;
    for (int i = 0; i < value.length() - 1; i++) {
        char temp = value[i];
        

        if (value[i] != value[i+1]) {
            stringWeight = stringWeight + (value[i] - 97) + 1;
            myvector.push_back(stringWeight);
            stringWeight = 0;
        } else {
            stringWeight = stringWeight + (value[i] - 97) + 1;
        }
    }

    //vector<string> result = weightedUniformStrings(value, myvector);
    
    for(unsigned int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << " ";
    }
    //cout << value << endl;

   

    return 0;
}