#include <bits/stdc++.h>
using namespace std;
void generateSubArrays(int arr[],int n){
    for (int i=0; i<=n-1; i++){
        for (int j =i; j<=n-1; j++){
            for (int k=i; k<=j; k++){
                cout << arr[k];
            }
            cout << endl;
        }
    }
}
int main() {
	int arr[]={10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	generateSubArrays(arr,n);
    return 0;
}
