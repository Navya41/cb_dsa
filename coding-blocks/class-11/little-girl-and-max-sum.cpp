//codeforces question - 1500 rated.
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

int32_t main() {
	int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for (int i=0; i<n; i++){
	    cin >> v[i];
	}
	vector<int> diff(n+1, 0);
	int l, r;
	//time = q.const
	while (q--){
	    cin >> l >> r;
	    l--; r--; //unlike cf we are using 0-based indexing
	    diff[l]++;
	    diff[r+1]--;
	}
	//n.const
	for (int i=1; i<=n; i++){
	    diff[i]+=diff[i-1];
	}
	sort(v.begin(),v.end()); //nlogn
	sort(diff.begin(), diff.end()-1); //nlogn
	int sum = 0;
	for (int i=0; i<n; i++){
	    sum += v[i]*diff[i];
	}
	cout << sum;
	//time = O(q+nlogn)
	//space = O(n)
    return 0;
}
