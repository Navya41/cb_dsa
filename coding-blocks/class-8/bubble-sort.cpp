#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){
    for (int i=1; i<=n-1; i++){
        bool flag = false; //assume no swaps done in ith pass
        for (int j=0; j<=n-i-1; j++){
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if (flag==false) break
    }
}
int main() {
    int arr[]={50,40,30,20,10};
    int n = 5;
    bubblesort (arr,n);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
