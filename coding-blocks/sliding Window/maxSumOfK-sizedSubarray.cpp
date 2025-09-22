#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int>& v, int n, int k){
    int i = 0, j = 0;
    int wsum = 0;
    while (j<k){
        wsum += v[j];
        j++;
    }
    int maxSoFar = wsum;
    while (j<n){
        wsum -= v[i];
        i++;
        wsum += v[j];
        j++;
        maxSoFar = max(maxSoFar, wsum);
    }
    return maxSoFar;
}
int main() {
	vector<int> v = {1, 10, 2, 7, 6, 3, 5};
	int n = 7, k=4;
	cout << maxSum(v,n,k) << endl;
    return 0;
}
