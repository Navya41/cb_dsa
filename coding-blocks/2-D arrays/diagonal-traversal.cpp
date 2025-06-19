#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void printDiagonal(int mat[][4], int m, int n, int i, int j){
    //print the given diagonal in mat[][] that starts from the ith, jth cell
    int k=0;
    while (i+k<=m-1 and j+k<=n-1){
        cout << mat[i+k][j+k] << " ";
        k++;
    }
}
void printDiagonal2(int mat[][4], int m, int n, int i, int j){
    int diagonal_length = min(m-i,n-j);
    for (int k=0; k<diagonal_length; k++){
        cout << mat[i+k][j+k] << " ";
    }
    cout << endl;
}
void diagonal_tranversal(int mat[][4],int m, int n){
    //iterate over all the possible syating points of diagonal_tranversal
    //1. form (i,0)
    for (int i=m-1; i>=0; i--){
        printDiagonal2(mat,m,n,i,0);
    }
    //2. form (0,j)
    for (int j=1; j<=n-1; j++){
        printDiagonal2(mat,m,n,0,j);
    }
}
int main() {
    int mat[][4]={
        {11,12,13,14},
        {15,16,17,18},
        {19,20,21,22}
    };
    int m = 3; int n=4;
    diagonal_tranversal(mat,m,n);
    return 0;
}
