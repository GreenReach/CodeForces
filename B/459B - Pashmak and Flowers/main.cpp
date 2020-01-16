#include <iostream>
#include<map>
using namespace std;

int main()
{
    long long n,b,i,maxi,mini,maxn,minn;
    map<long long,long long> flowers;
    map<long long,long long>::iterator it;

    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>b;
        flowers[b]++;
    }

    it = flowers.begin();
    maxi = mini = it->first;
    maxn = minn = it->second;
    it++;
    while( it != flowers.end())
    {
        if( maxi < it->first)
        {
            maxi = it->first;
            maxn = it->second;
        }
        else if( mini > it->first )
        {
            mini = it->first;
            minn = it->second;
        }
        it++;
    }

    if(maxi == mini)
    {
        cout<<0<<" "<<(maxn) * (maxn - 1) / 2 ;
        return 0;
    }

    long long a1 = maxi - mini;
    long long a2 = maxn * minn;
    cout<<a1<<" "<<a2;

    return 0;
}
