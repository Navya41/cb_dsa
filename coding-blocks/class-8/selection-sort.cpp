#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
    for (int i=0; i<=n-2; i++){
        int minIndex = i;
        for(int j=i+1; j<=n-1; j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap (arr[i],arr[minIndex]);
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
