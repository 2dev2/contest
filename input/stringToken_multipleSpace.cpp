#include<iostream>
#include<sstream>
#include<string>
//when string are seperated by multiple space then it is not a good way to parse string by using stringstream
//just use another strtok.
using namespace std;
int main()
{
    string a,b,c,d,e;
    string s="deva    dev   de  v ";
    //when there is multiple space it consider them only AS A seperator
    //So it does not retain multiple string as word themself
    stringstream input(s);
    //1-
   // input>>a>>b>>c>>d;
    //cout<<a,cout<<b,cout<<c,cout<<d;

    //2- ANOTHER WAY
    while(input>>a)
        cout<< a<<" ";

    return 0;
}
