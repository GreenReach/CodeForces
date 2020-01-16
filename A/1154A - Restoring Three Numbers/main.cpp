#include <iostream>

using namespace std;

int main()
{
    int s1,s2,s3,st;
    cin>>s1>>s2>>s3>>st;

    if(s1 > st)
        swap(s1,st);
    else if(s2 > st)
        swap(s2,st);
    else if(s3 > st)
        swap(s3,st);

    cout<<st-s1<<" "<<st-s2<<" "<<st-s3;
}
