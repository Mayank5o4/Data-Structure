#include<iostream>
using namespace std;

void reverseanArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,4,3,9,7};
    int n = sizeof(arr)/sizeof(int);

    int st=0, end=n-1;
    while(st < end){
        int temp = arr[st];                      //for swaqpping we can also use.
        arr[st] = arr[end];                      //swap(arr[st], arr[end])
        arr[end] = temp;

        st++;
        end--;
    }
    reverseanArray(arr,n);
    return 0;
}