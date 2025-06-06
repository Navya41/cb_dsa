#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {10, 20, 30,40,50,60,70}; 
    int k=3;
    int n = sizeof(arr) / sizeof(int);
    int i=0, j=n-1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++; j--;
    }
    j = k-1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++; j--;
    }
    i = k; j=n-1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++; j--;
    }
    for (int j = 0; j <= n - 1; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}