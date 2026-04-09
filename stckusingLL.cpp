#include <iostream>
#include<vector>
#include<list>
using namespace std;

// If said that make custom linked list. Don't use STL linked list.
// template<class T>
// class Node {
// public:
//     T data;
//     Node* next;

//     Node(T val){
//         data =val;
//         next = NULL;
//     }
// };
//Stack implementation using Linked list(STL)
template<class T>
class Stack {
    public:
    // Node<T>* head;
list<T> ll;

// Stack(){
//     head = NULL;
// }
void push(T val){
    ll.push_front(val);
    //push-front
    // Node<T>* newNode = new Node<T>(val);
    // if(head == NULL){
    //     head = newNode;
    // }else{
    //     newNode->next = head;
    // }
}
void pop(){
    ll.pop_front();
    //pop-front
    // Node<T>* temp = head;
    // head = head->next;
    // temp->next = NULL;
    // delete temp;
}
T top(){
    return ll.front();
    // return head->data;
}
bool isEmpty(){
    return ll.size() == 0;
//     return head == NULL;
}
};
int main(){
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout<< s.top() << " ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
}