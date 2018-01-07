#include <iostream>
using namespace std;
int main() {
    int i,l;
    char str[50],ch;
    cin>>str;
    for(i=0;str[i];i++);
     l = i;
    for(i=0;i<l/2;i++)
    {   ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;

    }
    cout<<"\n"<<str;

    return 0;
}