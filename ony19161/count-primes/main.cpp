#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

/*
	Problem Link: https://leetcode.com/problems/count-primes/
*/

int countPrimes(int n)
{
    int count = 0;
    if (n <= 2)
        return 0;
    else if (n == 3)
        return 1;
    else
    {
        int multipleOfPrime = 0;
        int temp = 0;
        vector<int> primeNumbers(n);
        primeNumbers[0] = 1;
        primeNumbers[1] = 1;
        int limit = ceil(sqrt(n));

        for (int i = 2; i <= limit; i++)
        {
            if (primeNumbers[i] == 0)
            {
                temp = i;
                while ((i * temp) < n)
                {
                    primeNumbers[i * temp] = 1;
                    temp++;
                }
            }
        }

        for (int x : primeNumbers)
        {
            if (x == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countPrimes(n) << endl;

    return 0;
}