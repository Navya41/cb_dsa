#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v = {2, 3, 2, 4, 0, 2, 0};
	int n = 7, k = 6;
	int i = 0, j = 0;
	int w_sum = 0;
	int maxLen = 0;
	while (j<n){
	    w_sum += v[j];
	    if (w_sum > k){
	        while(w_sum > k){
	            w_sum -= v[i];
	            i++;
	        }
	    }
	    if (w_sum == k) {
	        maxLen = max(maxLen, j-i+1);
	    }
	    j++;
	}
	cout << maxLen << endl;
    return 0;
}
