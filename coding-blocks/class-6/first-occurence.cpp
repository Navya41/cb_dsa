#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
    int n,t,i;
    cin>>n>>t;
    int arr[100];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        
        if (arr[i]==t){
            cout << i <<endl;
            break;
        }
        
    }
    if (i==n) cout << "-1" << endl;
    return 0;
}
