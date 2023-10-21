#include <bits/stdc++.h>
using namespace std;
int first_occ(int* arr, int n, int key){
    int start = 0, end = n -1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){ 
            ans = mid;
            end = mid -1;
        }
       else if(key < arr[mid]){ end = mid - 1; } // left part
       else if(key > arr[mid]){ start = mid + 1; } // right part
       mid = start + (end-start)/2; 
    }
    return ans;
}
int last_occ(int* arr, int n, int key){
    int start = 0, end = n -1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){ 
            ans = mid;
            start = mid + 1;
        }
       else if(key < arr[mid]){ end = mid - 1; } // left part
       else if(key > arr[mid]){ start = mid + 1; } // right part
       mid = start + (end-start)/2; 
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,3,3,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
 
   int first =  first_occ(arr,size,key);
   int last =  last_occ(arr,size,key);
   cout<<"Total Occurrence of "<<key<<"  is : "<< (last - first ) + 1<<endl;

    return 0;
}