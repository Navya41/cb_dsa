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

//time = n.(log n + log n) ~O(nlogn)
//space = O(1)
bool isCyclePresent(ListNode* head){
    set <ListNode*> s;
    while (head!=NULL){
        if(s.find(head) == s.end()){
            s.insert(head);
            head = head->next;
        } else {
            return true;
        }
    }
    return false;
}

//time = O(n)
//space = O(1)
bool cycle_optimized(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast!=NULL and  fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (slow== fast){
            return true;
        }
    }
    return false;
}

int main() {
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    head->next->next->next->next->next = new ListNode(60);
    head->next->next->next->next->next->next = head ->next;
    
    isCyclePresent(head) ?cout << "cycle found" << endl : cout << "cycle not found" << endl;
    
    cycle_optimized(head) ? cout << "cycle found" << endl : cout << "cycle not found" << endl;
    return 0;
}
