#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b;
    cout<<"enter the value a and b : ";
    cin>>a>>b;

    char opr;
    cout<<"enter the operators"<<endl;
    cin>>opr;

    switch(opr){

        case '+' : cout<<a+b<<endl;
        break;
        case '-' : cout<<a-b<<endl;
        break;
        case '*' : cout<<a*b<<endl;
        break;
        case '/' : cout<<a/b<<endl;
        break;
        default : cout<<"404 error"<<endl;
    }
    return 0;
}