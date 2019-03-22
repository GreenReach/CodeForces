#include <iostream>
#include<algorithm>
using namespace std;


bool cmp(int x,int y)
{
    return x > y;
}

int main()
{
    int n,i,v[100],sum1,sum2,nr;
    cin>>n;
    sum1 = sum2 = nr = 0;

    for(i = 0; i < n; i++)
    {
        cin>>v[i];
        sum1 += v[i];
    }

    sort(v, v+n, cmp);

    i = 0;
    while(sum1 >= sum2)
    {
        sum1 -= v[i];
        sum2 += v[i];
        nr++;
        i++;
    }

    cout<<nr;
}
