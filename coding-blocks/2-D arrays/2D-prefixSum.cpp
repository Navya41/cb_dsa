//time - mn+ O(mn+q)
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int m, n, q;
	cin >> m >>n>>q;
	vector<vector<int>> v(m,vector<int>(n));
	for (int i=0; i<m; i++){
	    for (int j=0; j<n; j++){
	        cin >> v[i][j];
	    }
	}
	vector<vector<int>> psum(m, vector<int>(n));
	for (int i=0; i<m; i++){
	    for (int j =0; j<n; j++){
	        psum[i][j] = v[i][j];
	        if (i>0)  psum[i][j]+= psum[i-1][j];
	        if (j>0) psum[i][j] += psum[i][j-1];
	        if (i>0 and j>0) psum[i][j] -= psum[i-1][j-1];
	        //psum[i][j] = psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1] + v[i][j];
	    }
	}
	//for (int i=0; i<m; i++){
	//    for (int j=0; j<n; j++){
	//        cout << psum[i][j] << " ";
	//    }
	//    cout << endl;
	//}
	while (q--){
	    int l1, r1, l2, r2;
	    cin >> l1 >> r1 >> l2 >> r2;
	    int sum=0;
	    //sum = psum[l2][r2] - psum [l2][r1-1] - psum[l1-1][r2] + psum[l1-1][r1-1];
	    sum = psum[l2][r2];
	    if (l1>0) sum = sum - psum[l1-1][r2];
	    if (r1>0) sum = sum - psum[l2][r1-1];
	    if (l1>0 and r2>0) sum = sum + psum[l1-1][r1-1];
	    cout << sum << endl;
	}
	return 0;
}
