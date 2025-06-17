#include <bits/stdc++.h>
#include <vector>
using namespace std;
void counting_sort(vector<int>& arr, int n, int k){
    vector<int> values(k+1,0);
    for (int i =0; i<n; i++){
        values[arr[i]]++;
    }
    for (int i=0; i<=k; i++){
        int j = values[i];
        while (j>0){
            cout << i << " ";
            j--;
        }
    }
}
int main() {
	int n,k; 
	cin >> n >> k;
	vector<int> arr(n);
	for (int i=0; i<n; i++){
	    cin >> arr[i];
	}
	counting_sort(arr, n, k);
	cout << endl;
	for (int i=0 ;i<n; i++){
	    cout << arr[i] << " ";
	}
    return 0;
}
