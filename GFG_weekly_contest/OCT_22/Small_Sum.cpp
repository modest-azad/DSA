// Small Sum
#include <bits/stdc++.h>
using namespace std;
int small_sum(int* arr,int size, int K){
    int sum = ;   
	    for(int i =  0; i<size; i++){
            if(arr[i] < arr[i+1]){
                sum  =  sum + arr[i];
            }
            if(arr[i] > arr[i+1]){
                int mod = arr[i] % K;
                sum = sum + mod;
            }
        }
    cout<<"Small Sum is: "<<endl;
        return sum ;
}
int main()
{   
    int arr[] = {7,8,5,9};
    int K = 6;
    int size = sizeof(arr)/sizeof(arr[0]);

    small_sum(arr,size,K);

    return 0;
}