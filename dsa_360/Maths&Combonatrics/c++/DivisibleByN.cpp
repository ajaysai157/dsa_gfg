#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isDivisible(string s){
        int rem=0;
        for(char c:s){
            rem=(rem*10+(c-'0'))%13;
        }
        return rem==0;
    }
};

int main()
{
    string n;
    cin>>n;
    Solution obj;
    if(obj.isDivisible(n)){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible";
    }
    
    return 0;
}