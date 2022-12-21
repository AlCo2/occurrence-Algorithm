#include <iostream>

using namespace std;



int binaryserch(int arr[],int left, int right, int x, int n){
    int result = 0;
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==x){
            result = mid;
            if(n==1)left = mid+1;
            if(n==2)right = mid-1;
        }else if(arr[mid]>x){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return result;
}


int main()
{
    int arr[] = {2,4,7,7,9};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    int last = binaryserch(arr,0,arrsize,7, 1);
    int first = binaryserch(arr,0,arrsize,7, 2);
    if(last-first==-1)
        cout << "0 occorance" << endl;
    else
        cout << "occurance: " << last-first+1<< endl;
}
