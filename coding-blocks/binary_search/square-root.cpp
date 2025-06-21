#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n;
	double ans;
	int s = 0;
	int e =n;
	while (s<=e) {
	    int m = s+(e-s)/2;
	    //is 'm' square root of 'n'
	    if (m*m<=n){
	        ans = m;
	        s = m+1;
	    } else {
	        e = m-1;
	    }
	}
	while (ans*ans<=n){
	    ans = ans +0.1;
	}
	ans = ans - 0.1;
	
	while (ans*ans<=n){
	    ans = ans +0.01;
	}
	ans = ans - 0.01;
	
	while (ans*ans<=n){
	    ans = ans +0.001;
	}
	ans = ans - 0.001;
    cout << ans << endl;
    return 0;
    
}
