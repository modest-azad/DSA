// # sum of all even number till N;
// Date: 5 oct 2023
#include<iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cout<<"Enter your number: ";
    cin>>N;

for(int i = 0; i<=N; i++){
    if(i%2==0){
        sum = sum + i; 
    }
}
cout<<"Sum of all Even number between "<<N<<" is :"<<sum;
    return 0;
}