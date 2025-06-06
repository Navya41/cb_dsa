#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
    for (int i=1; i<=n-1; i++){
        int key = arr[i];
        int j = i;
        while (j>=0 and key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main() {
	int arr[]={50,40,30,20,10};
	int n = 5;
    selectionsort (arr,n);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
