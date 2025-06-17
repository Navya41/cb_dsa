#include <bits/stdc++.h>
#include <vector>
using namespace std;
void counting_sort(vector<int>& arr, int n, int l, int r){
    vector<int> values(r-l+1,0);
    for (int i =0; i<n; i++){
        values[arr[i]-l]++;
    }
    for (int i=0; i<=r-l; i++){
        int j = values[i];
        while (j>0){
            cout << i+l << " ";
            j--;
        }
    }
}
int main() {
	int n,l,r; 
	cin >> n >> l>> r;
	vector<int> arr(n);
	for (int i=0; i<n; i++){
	    cin >> arr[i];
	}
	counting_sort(arr, n, l, r);
	cout << endl;
	for (int i=0 ;i<n; i++){
	    cout << arr[i] << " ";
	}
    return 0;
}
