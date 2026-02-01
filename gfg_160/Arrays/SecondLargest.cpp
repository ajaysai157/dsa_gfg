#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int largest = INT_MIN, second_largest = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > largest)
            {
                second_largest = largest;
                largest = arr[i];
            }
            else if (arr[i] > second_largest && arr[i] < largest)
            {
                second_largest = arr[i];
            }
        }

        if (second_largest == INT_MIN)
            return -1;

        return second_largest;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = obj.getSecondLargest(arr);
    cout << "Second Largest Element: " << result << endl;

    return 0;
}
