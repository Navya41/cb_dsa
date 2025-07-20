#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> ropeLengths = {4, 3, 2, 6};
	priority_queue<int, vector<int>, greater<int>> minHeap(ropeLengths.begin(), ropeLengths.end());
	int total = 0;
	while (minHeap.size()>1){
	    int firstSmallest = minHeap.top();
	    minHeap.pop();
	     int secondSmallest = minHeap.top();
	     minHeap.pop();
	     
	     int sum = firstSmallest+ secondSmallest;
	     total+=sum;
	     minHeap.push(sum);
	}
    cout << total << endl;
    return 0;
}
