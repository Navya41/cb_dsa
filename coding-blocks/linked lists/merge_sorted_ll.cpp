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

ListNode* mergeSortedLinkedList(ListNode* head1, ListNode* head2){
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    
    while (head1!=NULL and head2!=NULL){
        if (head1->val < head2->val){
            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;
        } else{
            temp->next = head2;
            temp = temp->next;
            head2 = head2->next;
        }
    }
    if (head1!=NULL){
        temp -> next = head1;
    }
    if (head2!=NULL){
        temp -> next = head2;
    }
    return dummy->next;
}

int main() {
    ListNode* head1 = NULL;
    insertAtHead(head1, 50);
    insertAtHead(head1, 30);
    insertAtHead(head1, 10);
    
    ListNode* head2 = NULL;
    insertAtHead(head2, 60);
    insertAtHead(head2, 40);
    insertAtHead(head2, 20);
    
    ListNode* head = mergeSortedLinkedList(head1, head2);
    printLinkedList(head);
    return 0;
}
