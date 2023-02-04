#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

/* 
	Problem Link: https://leetcode.com/problems/decode-the-message/
*/

string removeCharacterFromKey(string key, char chr)
{
    int l = key.length(); // storing the length of the string

    int _count = count(key.begin(), key.end(), chr); // counting the number of character in the string

    remove(key.begin(), key.end(), chr);

    key.resize(l - _count);

    return key;
}

string decodeMessage(string key, string message)
{
    string decodedMessage = "";
    string actualKey = "";

    string _key = removeCharacterFromKey(key, ' ');

    for (int i = 0; i < 26; i++)
    {
        actualKey.push_back(_key[0]);
        _key = removeCharacterFromKey(_key, actualKey[i]);
    }

    for (int i = 0; i < message.length(); i++)
    {
        if (message[i] == ' ')
        {
            decodedMessage.push_back(' ');
        }
        else
        {
            int index = actualKey.find(message[i]);
            decodedMessage.push_back(char(index + 97));
        }
    }

    return decodedMessage;
}

int main()
{
    string key = "thequickbrownfxjmpsvlazydg";
    string message = "vkbs bs t suepuv";
    string decodedMessage = "";

    cout << decodeMessage(key, message) << endl;

    key = "eljuxhpwnyrdgtqkviszcfmabo";
    message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    cout << decodeMessage(key, message) << endl;

    return 0;
}