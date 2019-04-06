#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int n,nr;

    cin>>n;

    if(n % 2 == 0)
        nr = n/2;
    else
        nr = ceil( (double)n/2) * -1;

    cout<<nr;
}
