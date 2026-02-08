#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int low=prices[0],res=0;
        for(int i=0;i<prices.size();i++){
            low=min(low,prices[i]);
            res=max(res,prices[i]-low);
        }
        return res;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    Solution obj;
    cout<<obj.maxProfit(prices);
    return 0;
}