#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        reverse(arr.begin(), arr.end());
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution obj;
        obj.reverseArray(arr);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
