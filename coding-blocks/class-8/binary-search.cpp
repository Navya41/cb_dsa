#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int t){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if (arr[m]==t){
            return m;
        }
        else if (t<arr[m]){
            e = m-1;
        }
        else {
            s = s+1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}
int main() {
	int arr[]={10,20,30,40,50,60,70};
	int n = sizeof(arr)/sizeof(int);
	int t = 60;
    cout << binarySearch(arr,n,t) << endl;
    return 0;
}
