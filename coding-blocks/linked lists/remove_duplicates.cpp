#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;
    
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(ListNode* &head, int x){
    ListNode* n = new ListNode(x);
    n->next = head;
    head = n;
    //free(n);
}

void printLinkedList(ListNode* head){
    //ListNode* xptr = head;
    while(head!= NULL){
        cout << head->val << " ";
        head= head->next;
    }
    cout << endl;
}

void remove_duplicates(ListNode* head){
    ListNode* prev = head;
    ListNode* curr = head->next;
    while (curr!=NULL){
        if (prev->val==curr->val){
            curr = curr->next;
        }else{
            prev->next = curr;
            prev = curr;
            curr = curr->next;
        }
    }
    prev -> next = NULL;
    //make sure last tracked element is the tail element and points to NULL
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 30);
    insertAtHead(head, 30);
    insertAtHead(head, 30);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    
    printLinkedList(head);
    
    remove_duplicates(head);
    printLinkedList(head);
    return 0;
}
