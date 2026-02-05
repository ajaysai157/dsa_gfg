#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while (n > 0){
            int rem = n % 10;
            sum += rem;
            n /= 10;
        }
        return sum;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--){
        Solution sol;
        int n;
        cin>>n;
        cout<<sol.sumOfDigits(n);
    }
    return 0;
}