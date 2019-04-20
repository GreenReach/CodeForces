#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n,i,nr = 0;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>s;

        if(s.compare("Tetrahedron") == 0)
            nr += 4;

        if(s.compare("Cube") == 0)
            nr += 6;

        if(s.compare("Octahedron") == 0)
            nr += 8;

        if(s.compare("Dodecahedron") == 0)
            nr += 12;

        if(s.compare("Icosahedron") == 0)
            nr += 20;

    }

    cout<<nr;

}
