#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findSum(int n)
    {
        int sum = (n * (n + 1)) / 2;
        return sum;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        Solution obj;
        cout << obj.findSum(n) << endl;
    }

    return 0;
}
