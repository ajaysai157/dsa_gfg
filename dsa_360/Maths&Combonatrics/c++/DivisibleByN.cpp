#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isDivisible(string s,int n){
        int rem=0;
        for(char c:s){
            rem=(rem*10+(c-'0'))%n;
        }
        return rem==0;
    }
};

int main()
{
    string s;
    int n;
    cout<<"Enter Number(Dividend) : ";
    cin>>s;
    cout<<"Enter Number (Divisor ) : ";
    cin>>n;
    Solution obj;
    if(obj.isDivisible(s,n)){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible";
    }
    
    return 0;
}