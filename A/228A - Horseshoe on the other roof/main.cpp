#include <iostream>
using namespace std;

int main()
{
    long int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    if(s1!=s2 && s1!=s3 && s1!=s4 && s2!=s3 && s2!=s4 && s3!=s4)
        {
            cout<<0;
            return 0;
        }

    if(s1==s2 && s2==s3 && s3==s4)
    {
        cout<<3;
        return 0;
    }

    if( ( s1==s2 && s2==s3 && s1!=s4) || (s1==s2 && s2==s4 && s4!=s3) || (s1==s3 && s3==s4 && s4!=s2) || (s2==s3 && s3==s4 && s2!=s1) ||(s1==s2 && s3==s4) ||(s1==s3 && s2 == s4) || (s1 == s4 && s2==s3) )
    {
        cout<<2;
        return 0;
    }

    cout<<1;
}
