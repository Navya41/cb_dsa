#include <bits/stdc++.h>
using namespace std;
bool matrix_search(int arr[3][3], int t){
    int m=3; int n=3;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j]==t) return true;
        }
    }
    return false;
}
int main() {
	int arr[3][3]={{50,80,20},{90,10,70},{60,30,40}};
	int t = 10;
	if (matrix_search(arr,t)) cout << "true";
	else cout << "false";
	return 0;
}
