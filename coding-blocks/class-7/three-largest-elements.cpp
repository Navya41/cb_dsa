#include <bits/stdc++.h>
#include<climits>
using namespace std;

int main() {
    int arr[] = {20,5,0,25,15,10}; 
    int n = sizeof(arr) / sizeof(int);
    int fl = INT_MIN, sl = INT_MIN, tl = INT_MIN;
    for (int i=0; i<n; i++){
        if (arr[i]>fl){
            tl = sl; sl = fl;
            fl = arr[i];
        } else if (arr[i]>sl){
            tl = sl;
            sl = arr[i];
        } else if (arr[i]>tl){
            tl = arr[i];
        }
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << fl << endl << sl << endl << tl;
    return 0;
}