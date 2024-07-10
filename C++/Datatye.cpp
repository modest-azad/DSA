// #2 Data Type: Show size of data
// Date: 04/10/2023

#include<iostream>
using namespace std;

int main()
{
    int a=1;
    char ch = 'A';
    float f = 1.34;
    double db = 1.3;;

    cout<<"Size of  is 'a' is " <<sizeof(a)<<" byte"<<endl;
     cout<<"Size of is 'h' is " <<sizeof(ch)<<" byte"<<endl;
     cout<<"Size of is 'f' is " <<sizeof(f)<<" byte"<<endl;
     cout<<"Size of is 'b' is " <<sizeof(db)<<" byte"<<endl;
     

    return 0;
}