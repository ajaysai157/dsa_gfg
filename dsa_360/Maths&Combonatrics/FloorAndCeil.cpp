#include <bits/stdc++.h>
using namespace std;

class Solutoin
{
public:
    vector<int> divFloorCeil(int a,int b)
    {
        vector<int> result;
        result.push_back(floor((double)a/b));
        result.push_back(ceil((double)a/b));
        return result;
    }
};

int main()
{
    int a,b;
    cin>>a>>b;
    Solutoin obj;
    vector<int> result=obj.divFloorCeil(a,b);
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}