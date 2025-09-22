#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for (int i=0; i<n; i++){
	    cin>>v[i];
	}
	long long psum = 0;
	long long ans = 0;
	map <long long, int> sums;
	sums[0]++;
    for (int i : v){
        psum += i;
        ans += sums[psum-x];
        sums[psum]++;
    }
    cout << ans << endl;
    return 0;
}
