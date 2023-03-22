#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a = 10, b = 20;

    // Arthemetic operators
    int a1 = a+b;
    int a2 = b-a;
    int a3 = a*b;
    int a4 = a/b;
    int a5 = b%a;
    int a6 = ++a;
    int a7 = --b;    
    cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl<<a7<<endl;

    // Relational Operators
    if (a == b){
        cout<<"they are same"<<endl;
    }else{
        cout<<"404 error"<<endl;
    }

    if (a != b){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    if (a<b){
        cout<<"a is small"<<endl;
    }else{
        cout<<"a is not small"<<endl;
    }

    if (a>b){
        cout<<"b is small"<<endl;
    }else{
        cout<<"b is not small"<<endl;
    }

    // Assignment Operators
    int c = 10;
    c += a;
    cout<<c<<endl;
    c-= a;
    cout<<c<<endl;
    c*= a;
    cout<<c<<endl;

    return 0;
}