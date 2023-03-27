#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n = 10;
    for (int i=1; i<n; i++){
       
       if (i == 5){
        continue;
       }
       cout<<i<<endl;
    }
    for (int j=1; j<n; j++){
       
       if (j == 5){
        break;
       }
       cout<<j<<endl;
    }
    return 0;
}