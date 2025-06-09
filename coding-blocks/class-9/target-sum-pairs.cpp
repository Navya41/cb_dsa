#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main() {
	int arr[]={10,20,30,40,50,60}; int cnt=0;
	int t = 60;
	int n = sizeof(arr)/sizeof(int);
	for (int i=0; i<n; i++){
	    for (int j=i+1; j<n; j++){
	        int sum = arr[i]+arr[j];
	        if (sum==t) cnt++;
	    }
	}
	cout  << cnt;
    return 0;
}
