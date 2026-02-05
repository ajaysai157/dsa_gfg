#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decToBinary(int n){
        string binary="";
        while(n>0){
            int rem=n%2;
            binary+=(rem+'0');
            n/=2;
        }
        reverse(binary.begin(),binary.end());
        return binary;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    string result = sol.decToBinary(n);
    cout << "Binary representation: " << result << endl;

    return 0;
}