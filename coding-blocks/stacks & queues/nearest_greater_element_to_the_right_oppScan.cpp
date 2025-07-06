//time = O(n)
//space = O(n) due to monotionic stack
//scan left to right to find the greatest element to the right
 
#include <bits/stdc++.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> f(vector<int>& a, int n){
    stack<int> s;
    vector<int> ans(n, -1);
    for (int i=0; i<n; i++){
        while (!s.empty() and a[s.top()]<=a[i]){
            ans[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }
    return ans;
}

int main() {
	vector<int> a = {5,3,6,7,2,1,4};
	int n = a.size();
	vector<int> ans = f(a, n);
	for (int i=0; i<n; i++){
	    cout << ans[i] << " ";
	}
    return 0;
}
