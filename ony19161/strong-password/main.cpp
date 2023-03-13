  #include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



/*
	Problem Link: https://rb.gy/gebfuo
*/

int minimumNumber(int n, string password) {
    //if (password.length() < 6) return 6 - password.length();
    int missingCharCount = 0;
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";


    bool isNum = false;
    for (int i = 0; i < numbers.length(); i++ ){
        if (password.find(numbers[i]) != std::string::npos) {
            isNum = true;
            break;
        }
    }

    if (!isNum) {
        missingCharCount++;
    }

    bool isSmallChar = false;
    for (int i = 0; i < lower_case.length(); i++ ){
        if (password.find(lower_case[i]) != std::string::npos) {
            isSmallChar = true;
            break;
        }
    }

    if (!isSmallChar) {
        missingCharCount++;
    }

    bool isLargeChar = false;
    for (int i = 0; i < upper_case.length(); i++ ){
        if (password.find(upper_case[i]) != std::string::npos) {
            isLargeChar = true;
            break;
        }
    }

    if (!isLargeChar) {
        missingCharCount++;
    }

    bool isSpecialChar = false;
    for (int i = 0; i < special_characters.length(); i++ ){
        if (password.find(special_characters[i]) != std::string::npos) {
            isSpecialChar = true;
            break;
        }
    }

    if (!isSpecialChar) {
        missingCharCount++;
    }

    if (n + missingCharCount < 6) {
        missingCharCount = missingCharCount + (6 - (n + missingCharCount));
    }


    return missingCharCount;

}



int main()
{

 
    //string password = "4700";
    string password = "Ab1";
    string B = "mikrfovfoiuyylxrqyeuilbrtsxxny";

    

    int value = minimumNumber(password.length(), password);
    

    cout << value << endl;

   

    return 0;
}