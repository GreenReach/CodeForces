#include <iostream>

using namespace std;

int main()
{
    int m,s,s1,*v,*w,i;
    cin>>m>>s;

    if((m > 1 && s == 0) || (9 * m < s))
    {

        cout<<"-1 -1";
        return 0;
    }

    s1 = s;
    v = new int[m];
    v[0] = min(s1,9);
    s1 -= v[0];
    for(i = 1; i < m; i++)
    {
        v[i] = min(s1,9);
        s1 -= v[i];
    }


    s1 = s;
    w = new int[m];
    for(i = 0; i < m - 1; i++)
    {
        w[i] = min(s1 - 1,9);
        s1 -= w[i];
    }
    w[m - 1] = s1;


    for(i = m - 1; i >= 0; i--)
        cout<<w[i];

    cout<<" ";

    for(i = 0; i < m; i++)
        cout<<v[i];


}
