#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char v[1000];
    cin>>v;
    v[0] = toupper(v[0]);
    cout<<v;
}
