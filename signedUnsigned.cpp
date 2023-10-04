// #4 default, signed and unsigned 

#include<iostream>
using namespace std;

int main()
{
    // default 
    int a = 12, b = -12;
    cout<<a<<" "<<b<<endl;


    // unsigned
    unsigned x = 12;
    cout<<x<<endl;

    unsigned y = -12;
    cout<<y <<endl; //output: 4294967284 but why?
    return 0;
}