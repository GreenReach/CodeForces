#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1,v2;
    int n,i,a;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a;
        v1.push_back(a);
        v2.push_back(a);
    }

    for(i = 0; i < n - 1; i++)
    {
        cin>>a;
        v1.erase( find(v1.begin(), v1.end(), a) );
    }

    for(i = 0; i < n - 2; i++)
    {
        cin>>a;
        v2.erase( find(v2.begin(), v2.end(), a) );

    }


   cout<<v1[0]<<" ";
   if(v1[0] == v2[0])
    cout<<v2[1];
   else
    cout<<v2[0];

}
