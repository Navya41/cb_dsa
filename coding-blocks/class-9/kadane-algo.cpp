#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main() {
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr)/sizeof(int);
	int x[100];
	x[0] = arr[0];
	int maxSofar = x[0];
	for (int i = 1; i<=n; i++){
	    x[i]=max(x[i-1]+arr[i], arr[i]);
	    maxSofar = max(maxSofar,x[i]);
	}
	cout << maxSofar << endl;
    return 0;
}
