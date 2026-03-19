//for printing LL we have to use "Iterators" 
//i.e.#include<iterator>
//Basically iterator in c++ are object that allow you to traverse through
// the elements of a container(like arrays, vector, lists) in a sequential manner
#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout<< (*itr) << " -> ";
    } 
    cout << "NULL" << endl;
}
int main(){
    list<int>ll;

    ll.push_front(2);
    ll.push_front(1);

    printList(ll);
    cout<< ll.size() << endl;  //size() tells us the size of LL

    cout<< "head = " << ll.front() << endl;  //front() tells us the first data node
    cout<< "tail = " << ll.back() << endl;   //back() tells last data node
    ll.pop_back();  //removes node from back
    printList(ll);
    return 0;
}