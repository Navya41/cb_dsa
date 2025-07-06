#include <bits/stdc++.h>
#include <set>
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

//time = O(nlogn)
//space = O(n)
void remove_cycle(ListNode* head){
    set <ListNode*> s;
    ListNode* temp = head;
    while (true){
        if(s.find(head) == s.end()){
            s.insert(head);
            temp = head;
            head = head->next;
        } else {
            temp -> next = NULL;
            break;
        }
    }
    return;
}

//time = O(n)
//space = O(1)
void removeCycleOptimized(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while (true){
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast) break;
    }
    ListNode* prev = head;
    while (prev->next!=fast){
        prev = prev->next;
    }
    slow = head;
    while (slow!=fast){
        slow = slow->next;
        fast = fast->next;
        prev = prev->next;
    }
    prev -> next = NULL;
}

int main() {
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    head->next->next->next->next->next = new ListNode(60);
    head->next->next->next->next->next->next = head ->next;
    
    //remove_cycle(head);
    removeCycleOptimized(head);
    return 0;
}
