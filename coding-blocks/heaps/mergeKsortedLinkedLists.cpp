/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class ListNodeCmp {
public:

    // return false if you want a to be given more priority than b otherwise return true

    bool operator()(ListNode* a, ListNode* b) {
        if (a->val < b->val) {
            // we want to give a higher priority than b since we are building
            // minHeap based on node values
            return false;
        }
        return true;
    }
};

class Solution {
public:

    // time : O(nklogk)
    // space: O(k) due to minHeap

    ListNode* mergeKLists(vector<ListNode*>& v) {

        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;

        priority_queue<ListNode*, vector<ListNode*>, ListNodeCmp> minHeap;
        for (ListNode* n : v) {
            if (n!= NULL) {
                minHeap.push(n);
            }
        }
        while (!minHeap.empty()) {
            ListNode* minNode = minHeap.top();
            minHeap.pop();
            temp->next = minNode;
            temp = temp->next;
            if (minNode->next != NULL) {
                minHeap.push(minNode->next);
            }
        }

        return dummy->next;

    }
};