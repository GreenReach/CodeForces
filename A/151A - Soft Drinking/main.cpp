#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalDrink = k * l, totalLime = c * d;

    cout<<min(min(totalDrink/(nl * n),totalLime/n), p/(np *n));
}
