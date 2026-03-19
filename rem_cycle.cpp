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
    public:
    Node* head;
    Node* tail;

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
void push_front(int val){
        Node* newNode = new Node(val);  //DMA

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void pop_front(){
    if(head == NULL){
        cout << "LL is empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}
 void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"null";
    }
//floyd cycle
    bool isCycle(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "cycle exists\n";
                return true;
            }
        }
        cout <<"cycle dosen't exists\n";
        return false;
    }

//removing cycle
void removeCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "cycle exists\n";
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            cout<<"dosen't exist\n";
            return;
        }
        
        slow = head;
        if(slow == fast){
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = NULL;
        }else{
            Node* prev = fast;
            while(slow !=fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL;
        }
        
    }
};
int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next = ll.head;
    removeCycle(ll.head);
    printList(ll.head);
    return 0;
}