//works only when error is not very precise
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n;
	double ans;
	double s = 0;
	double e = n;
	double err = 1e-6;
	while (e-s>err){
	    double m = s+(e-s)/2;
	    if (m*m<=n){
	        ans = m;
	        s = m+err;
	    } else {
	        e= m-err;
	    }
	}
    cout << ans << endl;
    return 0;
    
}
