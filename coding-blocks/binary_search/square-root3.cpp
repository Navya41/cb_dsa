#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n;
	double ans;
	double s = 0; 
	double e = n;
	double err = 1e-6;
	int k = 80;
	for (int i=1; i<=k; i++) {
	    double m = s+(e-s)/2;
	    if (m*m<=n){
	        ans = m;
	        s = m+err;
	    } else {
	        e= m-err;
	    }
	}
    cout << setprecision(10)<<fixed << ans << endl;
    return 0;
    
}
