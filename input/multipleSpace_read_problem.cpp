#include<iostream>
#include<string>
#include<cstring>

using namespace std;
#define MAX 50
int main()
{

    string str="deva   dev   de  v";
    string res;
    char t[MAX];
    char *p;
    string s;
    strcpy(t,str.c_str());
    //strtok works on charecter array NOT ON STRING
    p=strtok(t," ");//it split charecter array in token
    while(p!=NULL)
    {
        s=p;
        cout<<s;
        res=res+s+" ";
       p=strtok(NULL," ");

    }
    cout<<'\n';
    cout<<res;

    return 0;

