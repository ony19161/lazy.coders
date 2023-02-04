  #include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



/*
	Problem Link: shorturl.at/myEMX
*/

string longestCommonPrefix(string arr[], int N)
{
    int minStringlen = arr[0].size();
    int minStringIndex = 0;
    string shortestString = "";
    string prefix = "";
    bool isPrefixExists = true;

    for (int i = 1; i < N; i++)
    {
        if (arr[i].size() < minStringlen)
        {
            minStringlen = arr[i].size();
            minStringIndex = i;
        }
    }

    shortestString = arr[minStringIndex];

    while (shortestString.size() >= 1)
    {
        isPrefixExists = true;
        for (int n = 0; n < N; n++)
        {

            if (n != minStringIndex)
            {
                if (arr[n].rfind(shortestString, 0) == 0)
                {
                    isPrefixExists = isPrefixExists && true;
                }
                else
                {
                    isPrefixExists = false;
                }
            }
        }

        if (isPrefixExists)
        {
            prefix = shortestString;
            break;
        }

        shortestString = shortestString.substr(0, shortestString.size() - 1);
    }

    if (!isPrefixExists)
    {
        prefix = "-1";
    }

    return prefix;
}

int main()
{

    string arr[] = {"neykgrybpitzfunlefmtmbikgpxkqingmmsudqysarrilgtrnhka",
                    "dehilmgw",
                    "dcbokantqbudrdplxwhanrjqhqbptyjxaknmmafdbbi",
                    "dbaugyzavfniaygwxwrouvnqbnyxqexvizqozppuwcdxcltzjmodhdwitwilahhiizxhqobnqgksufudrkjanflgbv"};
    // // string arr[] = {"h", "h"};
    string value = longestCommonPrefix(arr, 4);

    cout << "Longest prefix is : " + value << endl;

    string arr2[] = {"geeksforgeeks", "geeks", "geek", "geezer"};

    value = longestCommonPrefix(arr2, 4);

    cout << "Longest prefix is : " + value << endl;

    string arr3[] = {"g", "g", "g", "g"};

    value = longestCommonPrefix(arr3, 4);

    cout << "Longest prefix is : " + value << endl;

    string arr4[] = {"geeksforgeeks", "geeks", "geek", "heezer"};

    value = longestCommonPrefix(arr4, 4);

    cout << "Longest prefix is : " + value << endl;

    // sort(begin(arr), end(arr));

    // for (int n = 0; n < 4; ++n)
    //     cout << arr[n] << endl;

    return 0;
}