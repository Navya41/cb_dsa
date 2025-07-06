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

//time : O(n)
//space : O(1)
ListNode* reverse_list (ListNode* &head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* temp = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    printLinkedList(head);
    
    head = reverse_list(head);
    printLinkedList(head);
    
    return 0;
}
