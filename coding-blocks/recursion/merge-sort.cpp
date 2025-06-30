#include <bits/stdc++.h>
using namespace std;
void merge (int arr[], int s, int m, int e){
    int i = s, j = m+1;
    int temp[100]; //based on constraints
    int k = s;
    while (i<=m and j<=e){
        if (arr[i]<arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr [j++];
        }
    }
    while (i<=m){
        temp[k++] = arr[i++];
    }
    while (j<=e) {
        temp[k++] = arr[j++];
    }
    for (int a=s; a<=e; a++){
        arr[a] = temp[a];
    }
}
void mergeSort(int arr[], int s, int e){
    int m = s + (e-s)/2;
    if (s==e) return;
    mergeSort(arr, s, m);
    mergeSort(arr, m+1, e);
    merge(arr, s, m, e);
}
int main() {
	int arr[] = {50,40,30,20,10};
	int n = sizeof(arr)/sizeof(int);
	mergeSort(arr, 0, n-1);
	for (int i=0; i<n; i++){
	    cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
