#include <iostream>
#include<vector>
using namespace std;

int nn[500001],dp[500001];

int main()
{
    long long n,sum=0;
    cin>>n;


    for(int i=0; i<n; i++)
    {
        cin>>nn[i];
        sum+=nn[i];
    }

    if(sum%3)
    {
        cout<<"0\n";
        return 0;
    }

    long long suf=0,pre=0,sol=0;

    for(int i=n-1; i>=0; i--)
    {
        suf+=nn[i];
        if(i<n-1)
            dp[i]=dp[i+1];
        else
            dp[i]=0;
        if(suf==sum/3)
            dp[i]++;
    }

    for(int i=0; i<n-2; i++)
    {
        pre+=nn[i];
        if(pre==sum/3)
            sol+=dp[i+2];
    }

    cout<<sol<<"\n";

    return 0;
}
