#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool matrix_search(int mat[][3], int t, int m, int n){
    int i=0, j=n-1;
    while (i<=m-1 and j>=0){
        if (mat[i][j]==t) return true;
        else if (mat[i][j]<t) i++;
        else j--;
    }
    return false;
}
int main() {
	int mat[][3]={{10,20,30},{40,50,60},{70,80,90}};
	int m = 3; int n=3;
	int t = 50;
	if (matrix_search(mat,t,m,n)) cout << "true";
	else cout << "false";
	return 0;
}
