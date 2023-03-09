  #include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



/*
	Problem Link: https://rb.gy/gebfuo
*/

string removeCharacterFromString(string value, char chr)
{
    int l = value.length(); // storing the length of the string

    int _count = count(value.begin(), value.end(), chr); // counting the number of character in the string

    remove(value.begin(), value.end(), chr);

    value.resize(l - _count);

    return value;
}

string UncommonChars(string A, string B)
{
    string result = "";

    if (A.length() >= B.length()) {
        int i = 0;
        while ( i < A.length()) {
            // searching each character of A in B
            if (B.find(A[i]) != std::string::npos) {
                B = removeCharacterFromString(B, A[i]);
                A = removeCharacterFromString(A, A[i]);  
                i--;
                if (i < 0) {
                    i = 0;
                }
            } else {
                if (result.find(A[i]) == std::string::npos) {
                    result = result + A[i];
                }
                i++;
            }
        }

        for (int j = 0; j < B.length(); j++) {
            if (result.find(B[j]) == std::string::npos) {
                    result = result + B[j];
            }
        }
        
    } else {
        int i = 0;
        while (i < B.length()) {
            // searching each character of B in A
            if (A.find(B[i]) != std::string::npos) {
                A = removeCharacterFromString(A, B[i]);
                B = removeCharacterFromString(B, B[i]);   
                i--;
                if (i < 0) {
                    i = 0;
                }             
            } else {
                if (result.find(B[i]) == std::string::npos) {
                    result = result + B[i];
                }
                i++;
            }
        }

        for (int j = 0; j < A.length(); j++) {
            if (result.find(A[j]) == std::string::npos) {
                    result = result + A[j];
            }
        }
    }

    if (result.length() == 0) {
        return "-1";
    } else if (result.length() == 1) {
        return result;
    } else {
        sort(result.begin(), result.end());
        return result;
    }
    
    
}

int main()
{

 
    string A = "sktofskbwzggugtomgfsisjnexfqsroidroomimoxfneesppmvdfjnuwhwppszididcmazppjujdtd";
    string B = "mikrfovfoiuyylxrqyeuilbrtsxxnyasdf";

    

    string value = UncommonChars(A, B);
    

    cout << "Uncommon characters are : " + value << endl;

   

    return 0;
}