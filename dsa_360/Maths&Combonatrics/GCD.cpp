#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};

int main() {
    int a, b;
    cin >> a >> b;

    Solution obj;
    cout << obj.gcd(a, b);

    return 0;
}
