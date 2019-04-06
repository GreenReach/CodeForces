#include <iostream>

using namespace std;

int main()
{
    int n,*v,*odd,*even,i,nr=0;
    cin>>n;

    v= new int[n+1];
    odd=new int[n+1];
    even= new int[n+1];

    v[0] = odd[0] = even[0] = 0;
    for(i = 1; i <= n; i++)
    {
        cin>>v[i];
        if(i % 2 == 0)
        {
            even[i] = even[i-1] + v[i];
            odd[i] = odd[i-1];
        }
        else
        {
            even[i] = even[i-1];
            odd[i] = odd[i-1]+v[i];
        }
    }

    for(i = 1; i <= n; i++)
        if(even[i-1] + odd[n] - odd[i] == odd[i-1] + even[n] - even[i])
            nr++;



    cout<<nr;
}
