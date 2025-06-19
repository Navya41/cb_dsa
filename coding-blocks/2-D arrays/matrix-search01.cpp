#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool matrix_search(int mat[][3], int t, int m, int n){
    //rows are sorted -> binary search
    for (int i=0; i<m; i++){
        //apply binary search in the ith row to find t in ith row 
        if (binary_search(mat[i],mat[i]+n,t)){
            return true;
        }
    }
    return false;
}
int main() {
	int mat[][3]={{50,80,20},{90,10,70},{60,30,40}};
	int m = 3; int n=3;
	int t = 50;
	if (matrix_search(mat,t,m,n)) cout << "true";
	else cout << "false";
	return 0;
}
