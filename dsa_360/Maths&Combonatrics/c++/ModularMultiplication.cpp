#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int modmul(int a, int b, int M)
    {
        int result = (a * b) % M;
        return result;
    }
};

int main()
{
    int a,b,m;
    cin>>a>>b>>m;
    Solution obj;
    cout<<obj.modmul(a,b,m);
    return 0;
}