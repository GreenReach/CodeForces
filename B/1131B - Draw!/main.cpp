#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,x1,y1,x2,y2,nr=1;
    cin>>n;
    x1 = y1 = 0;

    for(i = 0; i < n; i++)
    {
        cin>>x2>>y2;
        if(x1 != x2 || y1 != y2)
        {
            int a = max(x1,y1);
            int b = min(x2,y2);

            if(x1 == y1)
                a++;

            if(a <= b)
                nr += b - a + 1;
        }
        x1 = x2;
        y1 = y2;

    }

    cout<<nr;
}
