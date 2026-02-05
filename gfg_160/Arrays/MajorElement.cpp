#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMajority(vector<int> &arr)
    {
        vector<int> res;
        unordered_map<int, int> freq;
        int n = arr.size();
        int n_freq = n / 3;

        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        for (auto key : freq)
        {
            if (key.second > n_freq)
            {
                res.push_back(key.first);
            }
        }

        sort(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution sol;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = sol.findMajority(arr);

    if (ans.empty())
    {
        cout << "No Majority Element";
    }
    else
    {
        for (int x : ans)
        {
            cout << x << " ";
        }
    }

    return 0;
}
