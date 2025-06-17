#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for (int i=0; i<n; i++){
	    cin >> v[i];
	}
	vector<int> diff(n+1, 0);
	int l, r, x;
	while(q--){
	    cin >> l >> r >> x;
	    diff[l]+=x;
	    diff[r+1]-=x;
	}
	for (int i=1; i<n+1; i++){
	    diff[i]+=diff[i-1];
	}
	for (int i=0; i<n; i++){
	    v[i]+=diff[i];
	    cout << v[i] << " ";
	}
    return 0;
}
