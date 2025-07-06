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

int findLength_iterative(ListNode* head){
    int cnt = 0;
    while (head!=NULL){
        cnt ++;
        head = head-> next;
    }
    return cnt;
}

int findLength_recursive(ListNode* head){
    //base case
    if (head == NULL) return 0;
    
    //recursive case
    int x = findLength_recursive(head->next);
    return 1+x;
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    //printLinkedList(head);
    
    cout << findLength_iterative(head) << endl;
    cout << findLength_recursive(head) << endl;
    return 0;
}
