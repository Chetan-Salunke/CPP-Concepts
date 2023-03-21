                                                    //local scope
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a = 10, b = 20;
    int c = a+b;

    cout<<c;
    return 0;
}


                                                   //globle scope

#include <bits/stdc++.h>
using namespace std;

int a;

int main ()
{
    int b = 10, c = 20;
    int a = b + c;
    cout<<a<<" ";
    return 0;
}