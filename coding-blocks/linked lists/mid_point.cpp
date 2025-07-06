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
//n/2*count = O(n)
ListNode* findmidPoint(ListNode* head){
    if (head == NULL) return NULL;
    ListNode* slow = head;
    ListNode* fast = head-> next;
    while (fast != NULL  && fast->next!=NULL){
        slow =slow-> next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    //insertAtHead(head, 10);
    
    printLinkedList(head);
    
    ListNode* midPoint = findmidPoint(head);
    midPoint!=NULL? cout << midPoint->val << endl : 
    cout << "empty list" << endl;
    return 0;
}
