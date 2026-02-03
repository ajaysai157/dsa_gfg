#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i+=1;
            }
        }
    }
};

int main()
{
    Solution obj;
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    obj.pushZerosToEnd(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}