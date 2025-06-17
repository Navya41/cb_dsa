#include <bits/stdc++.h>
using namespace std;
void transpose(int mat[][10], int n){
    for (int i=0;i<n; i++){
        for (int j=i+1; j<n; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}
int main() {
	int n;
	cin>> n;
	int mat[10][10];
	for (int i=0; i<n; i++){
	    for (int j=0; j<n; j++){
	        cin >> mat[i][j];
	    }
	}
	cout << "Matrix before transpose:" << endl;
	for (int i=0; i<n; i++){
	    for (int j=0; j<n; j++){
	        cout << mat[i][j] << " ";
	    }
	    cout << endl;
	}
	cout << endl<<endl;
	transpose(mat,n);
	cout << "Matrix after transpose:" << endl;
	for (int i=0; i<n; i++){
	    for (int j=0; j<n; j++){
	        cout << mat[i][j] << " ";
	    }
	    cout << endl;
	}
    return 0;
}
