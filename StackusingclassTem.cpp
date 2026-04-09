#include <iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
class Stack {
    vector<T> vec;
public:
void push(T val){
    vec.push_back(val);
}
void pop(){
    if(isEmpty()){
        cout<<"stack is empty.\n";
        return;
    }
    vec.pop_back();
}
T top(){
        if(isEmpty()){
            cout<< "stack is empty.\n";
            return -1;
        }
        T lastidx = vec.size()-1;
        return vec[lastidx];
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack<char> s;

    s.push_back('c');
    s.push_back('b');
    s.push_back('a');

    while(!s.isEmpty()){
        cout<< s.top()<< " ";
        s.pop();
    }
    cout<< endl;
    return 0;
}