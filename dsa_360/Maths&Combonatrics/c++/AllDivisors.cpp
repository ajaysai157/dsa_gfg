#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> isDivisor(int n){
        vector<int> result;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0) {
                if(n/i==i){
                    result.push_back(i);
                }else{
                    result.push_back(i);
                    result.push_back(n/i);
                }
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};


int main(){
    int n;
    cin>>n;
    Solution obj;
    vector<int> result=obj.isDivisor(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<< " ";
    }
    return 0;
}
