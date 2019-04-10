#include <iostream>

using namespace std;

int main()
{
    long long int n,m,i,curent,last = 1,nr = 0;
    cin>>n>>m;

       for(i = 0; i < m; i++)
    {
        cin>>curent;
        if(curent >= last)
            nr += curent-last;
        else
            nr += n - last + curent;

        last = curent;
    }

    cout<<nr;

}
