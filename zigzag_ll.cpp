Node* splitAtMid(Node* head){
    Node* slow =  head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL || fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    } 
    if(prev != NULL){
        prev->next = NULL;  //split at middle
    }
    return slow;  //slow = rightHead
}
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

void zigzagLL(Node* head){
    Node* rightHead = splitAtMid(head);
    Node* rightHeadRev = reverse(rightHead);

    //alternate merging : 1st head = head and 2nd head = rightHeadRev
    Node* left = head;
    Node* right = rightHeadRev;
    Noide* tail = NULL;

    while(left != NULL && right != NULL){
        Node* nextleft = left->next;
        Node* nextright = right->next;

        left->next = right;
        right->next = nextleft;

        tail = right;

        left = nextleft;
        right = nextright;

    }
    if(right != NULL){
        tail->next = right;
    }
    return head;
}