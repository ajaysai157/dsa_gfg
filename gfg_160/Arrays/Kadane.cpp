#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubarraySum(vector<int> &arr)
    {
        int curr_sum = arr[0], max_sum = arr[0];
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            curr_sum = max(curr_sum + arr[i], arr[i]);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    cout << obj.maxSubarraySum(arr) << endl;

    return 0;
}
