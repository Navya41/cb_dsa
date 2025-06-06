#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {10, 20, 30,40,50,60,70}; 
    int k=3;
    int n = sizeof(arr) / sizeof(int);
    for (int j=1; j<=k; j++){
        for (int i = n - 1; i >= 1; i--) {
            swap(arr[i], arr[i - 1]);
        }
    }
    for (int j = 0; j <= n - 1; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}