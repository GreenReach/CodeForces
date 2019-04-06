#include <iostream>

using namespace std;

int main()
{
    int n,i,day,curent=0,nr=0;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>day;

        if(day > curent)
            curent = day;

        if(i == curent-1)
            nr++;
    }

    cout<<nr;
}
