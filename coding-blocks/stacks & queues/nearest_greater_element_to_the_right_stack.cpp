//time = O(n)
//space = O(n) due to stack

#include <bits/stdc++.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> f(vector<int>& a, int n){
    stack<int> s;
    vector<int> ans;
    for (int i=n-1; i>=0; i--){
        while (!s.empty() and s.top()<=a[i]){
            s.pop();
        }
        if (s.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(ans.begin(),ans.end());
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
