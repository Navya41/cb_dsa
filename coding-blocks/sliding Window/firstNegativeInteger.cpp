#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v = {-2,0,-1,2,-3,1,-3};
	int n = 7, k = 4;
	queue<int> q;
	vector<int> ans;
	int i = 0, j = 0;
	while (j<k){
	    if (v[j] < 0) q.push(v[j]);
	    j++;
	}
	if (q.empty()) {
	    ans.push_back(0);
	} else {
	    ans.push_back(q.front());
	}
	while (j<n){
	    if (v[i] < 0) {
	        q.pop();
	    }
	    i++;
	    if (v[j] < 0){
	        q.push(v[j]);
	    }
	    j++;
	    if (q.empty()) {
	    ans.push_back(0);
	    } else {
	    ans.push_back(q.front());
	    }
	}
	for (int x : ans){
	    cout << x << " ";
	}
	cout << endl;
    return 0;
}
