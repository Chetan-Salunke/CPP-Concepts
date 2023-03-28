#include <bits/stdc++.h>
using namespace std;

int main ()
{

    //first method
    int marks[5] = {10,20,30,40,50};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;


    //second method 
    int arr[5];
    arr[0] = 1;
    arr[1] = 11;
    arr[2] = 111;
    arr[3] = 1111;
    arr[4] = 11111;

    cout<<arr[4]<<endl;


    //using loop 
    int student[5] = {23,45,78,95,62};
    for (int i=0; i<5 ; i++){
        cout<<student[i]<<endl;
    }


    //pointers with array
    int pointers[4] = {12,13,14,15};
    int *p = pointers;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<"the value of 0 is : "<<*p<<endl;
    cout<<"the value of 1 is : "<<*(p+1)<<endl;
    cout<<"the value of 2 is : "<<*(p+2)<<endl;
    cout<<"the value of 3 is : "<<*(p+3)<<endl;
    return 0;
}