#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main(){
    int arr[5] = {6, 4, 8, 2, 1};
    selectionSort(arr, 5); 
    return 0;
}