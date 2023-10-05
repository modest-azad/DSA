#include<iostream>
using namespace std;

int main()
{
        // Triangle
    for(int i =1; i<=5; i++){
        for(int j =1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
    }
    cout<<"Reveserd Triangle "<<endl;

    // Reversed Triangle 
    for(int i =1; i<=5; i++){
        for(int j = 5; j >= i; j--){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}