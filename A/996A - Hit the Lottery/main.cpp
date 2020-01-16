#include <iostream>

using namespace std;

int main()
{
    int n,nr = 0;
    cin>>n;

    nr += n / 100;
    n -= n/100 * 100;

    nr += n / 20;
    n -= n/20 * 20;

    nr += n / 10;
    n -= n/10 * 10;

    nr += n / 5;
    n -= n/5 * 5;

    nr += n;

    cout<<nr;

}
