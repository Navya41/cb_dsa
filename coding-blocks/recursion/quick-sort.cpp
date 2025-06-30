#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[e];
    
    int j = s;
    int i = s-1;
    
    while (j<e) {
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
            j++;
        } else{
            j++;
        }
    }
}
void quickSort(int arr[], int s, int e){
    if (s==e) return;
    if (s > e) return;
    int pidx = partition(arr, s, e);
    quickSort (arr, s, pidx-1);
    quickSort (arr, pidx+1, e);
}
int main() {
	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr)/sizeof(int);
	quickSort(arr, 0, n-1);
	for (int i=0; i<n; i++){
	    cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
