#include <iostream>

using namespace std;

int main()
{
    int n,i,in,out,maxi=0,curent=0;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>out>>in;
        curent -= out;
        curent += in;

        if(curent > maxi)
            maxi = curent;
    }

    cout<<maxi;
}
