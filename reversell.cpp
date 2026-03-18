#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

    ~Node(){
        
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }

    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    //inserting element from head in ll
    void push_front(int val){
        Node* newNode = new Node(val);  //DMA

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
     void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"null";
    }

    
void reverse(){
    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;

}
};
int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.printList();

    ll.reverse();
    ll.printList();

    return 0; 
}