#include <iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    long long int n,l,i,*v,maxi = 0,a;
    double d;
    cin>>n>>l;
    v = new long long int[n];

    for(i = 0; i < n; i++)
        cin>>v[i];

    sort(v,v+n);

    for(i = 0; i < n-1; i++)
    {
        a= v[i+1] - v[i];
        if(a > maxi)
            maxi = a ;
    }

    d = max( maxi/2.0, max( v[0]-0.0, (double)l-v[n-1]));
    printf("%12lf\n",d );
}
