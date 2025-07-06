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

bool findElement_iterative(ListNode* head, int x){
    while (head != NULL){
        if (head->val == x) return true;
        head = head->next;
    }
    return false;
}

bool findElement_recursive(ListNode* head, int x){
    if (head == NULL) return false;
    if (head->val == x) return true;
    else return findElement_recursive(head->next, x);
}

int main() {
	ListNode* head = NULL;
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	//printLinkedList(head);
	
	cout << findElement_iterative(head, 40)<< endl;
	cout << findElement_recursive(head, 40) << endl;
    return 0;
}
