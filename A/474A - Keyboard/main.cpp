#include <iostream>
#include<string>
using namespace std;

int main()
{
    char c;
    string message,keyboard;
    int i,offset,poz;

    cin>>c>>message;
    keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if(c =='L')
        offset = 1;
    else
        offset = -1;

    for(i = 0; i < message.size(); i++)
    {
        poz = keyboard.find(message[i]);
        cout<<keyboard[poz + offset];

    }

}
