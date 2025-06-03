#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
    int n,t;int i;
    cin>>n;
    int arr[100];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    i=0; int j=n-1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++; j--;
    }
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
