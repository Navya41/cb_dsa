//time = O(n)
//space = O(n) due to monotonic stack

#include <bits/stdc++.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> f(vector<int>& a, int n){
    stack<int> s; //pair<value,index>
    vector<int> span;
    for (int i=0; i<n; i++){
        while (!s.empty() and a[s.top()]<=a[i]){
            s.pop();
        }
        int j;
        if (s.empty()){
            j = -1;
        } else{
            j = s.top();
        }
        span.push_back(i-j);
        s.push(i);
    }
    return span;
}

int main() {
	vector<int> stock = {100,80,60,70,60,75,85};
	int n = stock.size();
	vector<int> span = f(stock, n);
	for (int i=0; i<n; i++){
	    cout << span[i] << " ";
	}
    return 0;
}
