#include <bits/stdc++.h>
using namespace std;
int pivot_element(vector<int>& arr)
{
    int n = arr.size();

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s; // or return e;
}

int binary_search(vector<int>& arr, int size, int key){
  
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
    vector<int> arr = {6, 7, 1, 2, 3, 4, 5};
    int size = arr.size();
    int key = 2;
    int pivot = pivot_element(arr);
    int ans = 0;
    if(arr[pivot] < key && key < size-1){
        ans = binary_search(arr,size,key);
    }
    else{
        ans = binary_search(arr,size,key);
    }
    cout<<"Index of "<<key <<" is "<<ans;
    return 0;
}