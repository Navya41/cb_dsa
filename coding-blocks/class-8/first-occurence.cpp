#include <bits/stdc++.h>
using namespace std;
int firstOcc (int arr[], int n, int t){
    int s = 0;
    int e =n-1;
    int m = s+(e-s)/2;
    int ind;
    while (s<=e){
        if (arr[m]==t){
            ind = m;
            e = m-1;
        }
        else if (arr[m]>t){
            e =m-1;
        }
        else if (arr[m]<t){
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return ind;
}
int main() {
	int n, t; cin >> n >> t;
	int arr[100];
	for (int i=0; i<n; i++){
	    cin >> arr[i];
	}
	cout << firstOcc(arr, n, t) << endl;
    return 0;
}
