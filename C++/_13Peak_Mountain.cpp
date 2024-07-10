#include <bits/stdc++.h>
using namespace std;
int peak_mountain(int* arr, int n)  {
    int start = 0, end = n -1;
    int mid = start + (end-start)/2; 
    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else if(arr[mid] > arr[mid]){
            end = mid;
        }
        int mid = start + (end-start)/2; // update
    }
    return start; //why?
}


int main()
{
    int arr[] = {3, 4, 5, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
  
   cout<<"Peak Element is : "<< peak_mountain(arr,size)  <<endl;

    return 0;
}