#include <bits/stdc++.h>
#include <vector>
using namespace std;
void dnf_sort(vector<int>& arr, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while (mid<=high){
        if (arr[mid]==0){
            swap (arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main() {
	int n; 
	cin >> n;
	vector<int> arr(n);
	for (int i=0; i<n; i++){
	    cin >> arr[i];
	}
	dnf_sort(arr, n);
	for (int i=0 ;i<n; i++){
	    cout << arr[i] << " ";
	}
    return 0;
}
