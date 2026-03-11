// Sort an array of characters using insertion sort algorithm.

#include<iostream>
using namespace std;

void print(char arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void sortChar(char arr[], int n){
   
    for(int i=0; i<n; i++){
        int currKey=arr[i];
        int prev=i-1;
        while(prev >= 0 && arr[prev] > currKey){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        
        arr[prev+1] = currKey;
    }
    print(arr, n);
}

int main(){
    char ch[5] = {'e', 'd', 'a', 'c', 'b'};
    sortChar(ch, 5);
    return 0;
}