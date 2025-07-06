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

ListNode* getTail (ListNode* head){
    while (head->next != NULL){
        head = head->next;
    }
    return head;
}
void insertAtTail (ListNode* &head, int val){
    if (head == NULL){
        insertAtHead(head, val);
        return;
    }
    ListNode* n = new ListNode(val);
    ListNode* tail = getTail(head);
    tail->next = n;
}

ListNode* getNode(ListNode* head, int j){
    int k = 1;
    while (head!=NULL and k<=j){
        head = head -> next;
        k++;
    }
    return head;
}
void insertAtIndex(ListNode* &head, int indx, int val){
    if (indx==0){
        insertAtHead(head, val);
        return;
    }
    ListNode* n = new ListNode(val);
    ListNode* prev = getNode(head, indx-1);
    if (prev == NULL){
        insertAtTail(head, val);
        return;
    }
    n->next = prev->next;
    prev->next = n;
}

void printLinkedList(ListNode* head){
    //ListNode* xptr = head;
    while(head!= NULL){
        cout << head->val << " ";
        head= head->next;
    }
    cout << endl;
}

void deleteHead (ListNode* &head){
    ListNode* temp = head;
    head = head->next;
    delete temp;
    return;
}

void deleteTail(ListNode* &head){
    if (head==NULL){
        return ;
    }
    if (head->next == NULL){
        deleteHead(head);
    }
    ListNode *curr = head;
    ListNode *prev;
    //ListNode *tail = getTail(head);
    while (curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
}

void deleteatIndex(ListNode* head, int i){
    if (i==0){
        deleteHead(head);
        return;
    }
    ListNode* prev = getNode(head, i-1);
    if (prev == NULL) {
        return ;
    }
    ListNode* cur = prev->next;
    if (cur == NULL) {
        return;
    }
    prev->next = cur -> next;
    delete cur;
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    insertAtTail(head, 60);
    
    insertAtIndex(head, 2, 25);
    
    printLinkedList(head);
    
    deleteHead(head);
    deleteTail(head);
    deleteatIndex(head, 2);
    printLinkedList(head);
    return 0;
}
