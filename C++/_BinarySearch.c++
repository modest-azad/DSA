#include <iostream>
using namespace std;

int linear_search(int* arr,int size, int key){
  int i = 0;
    while(i<size){
        if(key == arr[i]) return i; 
        i++;
    }

     return -1; // if not found.
}
int binary_search(int* arr,int size, int key){
  
    int start=0, end = size-1;
    int mid = start + (end - start)/2;

   while(start <= end){
    if(arr[mid] == key) {return mid;}

    if(key > arr[mid]){ start = mid + 1;}
    else{ end = mid -1;}
    
    mid = start + (end - start)/2;
   }//loop ended
    
    return -1; // if not found.
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9};//should be shorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 8 ;

    int ans =  linear_search(arr,size,key);
//   int ans =  binary_search(arr,size,key);

    cout<<"Index of "<<key <<" is "<<ans;         
    return 0;
}