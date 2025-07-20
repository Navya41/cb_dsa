#include <bits/stdc++.h>
#include <queue>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int>> minHeap){
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}
int main() {
    int k;
    cin>>k;
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int num;
    for (int i=0; i<k; i++){
        cin >> num;
        minHeap.push(num);
    }
    while (true){
        cin >> num;
        if (num==-2) break;
        if (num==-1) printHeap(minHeap);
        else if (num > minHeap.top()){
            minHeap.pop();
            minHeap.push(num);
        }
    }
}
