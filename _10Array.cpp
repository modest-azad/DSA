#include<iostream>
using namespace std;
void binarySearch(int* arr, int size, int key){
    int start = 0, end = size-1 ,mid;

    mid = start + (end - start)/2;
    for(int i=start; i<end)
    
}

int main()
{
    int evenArr[6] = {2,4,6,8,12,18};
    int key = 12, size = 6;

    binarySearch(evenArr,size,key);

    return 0;
}