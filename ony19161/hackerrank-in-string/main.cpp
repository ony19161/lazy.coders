#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s = "hackerrank";
    string input = "hhaacckkekraraannk";

    int result[10] = {0};
    int foundCount = 0;

    int startIndex = 0;
    for (int i = 0; i < s.length(); i++)
    {

        for (int j = startIndex; j < input.length(); j++)
        {
            if (input[j] == s[i])
            {
                foundCount++;
                startIndex = j + 1;
                break;
            }
            else
            {
                if (j == input.length())
                {
                    i = 11;
                }
            }
        }
    }

    if (foundCount == s.length())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}