#include<iostream>
using namespace std;

void print(int arr[], int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingSort(int arr[], int n){
    int freq[100000];
    int minval = INT_MAX, maxval = INT_MIN;
    for(int i=0; i<n; i++){
        minval = min(minval, arr[i]);
        maxval = min(maxval, arr[i]);

    }
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=minval, j=0; i<=maxval; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}
int main(){
    int arr[7] = {1, 4, 1, 2, 7, 5, 2};
    
    countingSort(arr, 7);
    return 0;
}