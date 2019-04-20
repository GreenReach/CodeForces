#include <iostream>
#include<cmath>
using namespace std;


bool prime[1000001];

void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<1000001; i+=2)
        prime[i] = true;

    for (i=3; i*i<=1000001; i+=2)
        if (!prime[i])
            for (j=i*i; j<1000001; j+=2*i)
                prime[j] = true;
}


int main()
{
     int n;
    long long nr,r;

    sieve();
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>nr;

        r = sqrt(nr);

        if (!prime[r] && r*r == nr)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
