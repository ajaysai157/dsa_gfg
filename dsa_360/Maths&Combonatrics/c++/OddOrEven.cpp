#include <bits/stdc++.h>
using namespace std;
class Solutoin
{
public:
    bool isEven(int n)
    {
        if(n%2==0){
            return true;
        }else{
            return false;
        }
    }
};

int main()
{
    int n;
    cin>>n;
    Solutoin obj;
    if(obj.isEven(n)) {
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    return 0;
}