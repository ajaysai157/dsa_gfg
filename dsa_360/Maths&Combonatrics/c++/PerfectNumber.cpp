#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int factors=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                factors+=i;
                if(i!=n/i) {
                    factors+=n/i;
                }
            }
        }
        if(factors==n) return true;
        else return false;
    }
};

int main(){
    int n;
    cin>>n;
    Solution obj;
    if(obj.isPerfect(n)){
        cout<<n<<" is perfect number";
    }else{
        cout<<n<<" is not perfect number";
    }
    return 0;
}