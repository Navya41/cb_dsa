#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {5,3,6,7,2,1,4};
	int n = sizeof(arr)/sizeof(int);
	vector<int> ans(n,-1);
	for (int i=0; i<n; i++){
	    for (int j = i+1; j<n; j++){
	        if (arr[i]<arr[j]){
	            ans[i] = arr[j];
	            break;
	        }
	    }
	}
	for (int i=0; i<n; i++){
	    cout << ans[i] << " ";
	}
    return 0;
}
