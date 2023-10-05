// #Check user input is lowercase, UPPERCASE, Number or a symbol.
// Date:05 oct 2023

#include<iostream>
using namespace std;

int main()
{
    char userInput;
    cout<<"Give me your input: ";
    cin>>userInput;

    if(userInput>='a' && userInput<='z'){
        cout<<"Input is in : lowercase";
    }
    else if(userInput>='A' && userInput<='Z'){
        cout<<"Input is in : UPPERCASE";
    }
    else{
        cout<<"Input is a : Number";
    }


    return 0;
}