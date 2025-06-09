#include<bits/stdc++.h>
#include<climits>
using namespace std;
void generateSubArrays(int arr[],int n){
    int sum, max_sum= INT_MIN;
    for (int i=0; i<=n-1; i++){
        for (int j =i; j<=n-1; j++){
            sum = 0;
            for (int k=i; k<=j; k++){
                sum = sum+arr[k];
            }
            max_sum = max(max_sum,sum);
        }
    }
    cout << max_sum;
}
int main() {
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr)/sizeof(int);
	generateSubArrays(arr,n);
    return 0;
}
