#include <iostream>
#include<vector>
using namespace std;
//All the containers in STL which are vector, ll, stack are passed by value.

//create stack using vector(TC of all 4 functions is O(1))
class Stack {
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<< "stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    int top(){
        if(isEmpty()){
            cout<< "stack is empty.\n";
            return -1;
        }
        int lastidx = vec.size()-1;
        return vec[lastidx];
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack s;
    s.push(2);
    s.push(3);
    while(!s.isEmpty()){
        couy<< s.top() << " ";
        s.pop();
    }
    return 0;
}