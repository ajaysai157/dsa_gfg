#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }

    int lcm(int a, int b)
    {
        // code here
        return (a * b) / gcd(a, b);
    }
};

int main()
{
    int a,b;
    cin>>a>>b;
    Solution obj;
    int lcm=obj.lcm(a,b);
    cout<<lcm;

    return 0;
}