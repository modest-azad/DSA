#include <bits/stdc++.h>
using namespace std;
int pivot_element(vector<int>arr){
    int n = arr.size();

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid ;
        }
        mid = s + (e-s)/2;
    }

    return s; // or return e;

}
int main()
{
    vector<int> arr = {6,7,1,2,3,4,5} ;

   int ans = pivot_element(arr);
   cout<<"Index of Pivot Element is: "<< ans <<endl;

    return 0;
} 