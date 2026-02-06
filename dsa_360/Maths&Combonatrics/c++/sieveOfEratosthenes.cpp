#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int m)
    {
        if (m <= 1)
            return false;
        for (int j = 2; j <= sqrt(m); j++)
        {
            if (m % j == 0)
            {
                return false;
            }
        }
        return true;
    }

    vector<int> sieve(int n)
    {
        vector<int> prime;
        for (int i = 1; i <= n; i++)
        {
            if (isPrime(i))
            {
                prime.push_back(i);
            }
        }
        return prime;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    vector<int> primes = obj.sieve(n);

    for (int p : primes)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}
