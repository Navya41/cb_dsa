#include <bits/stdc++.h>
using namespace std;

void f(char inp[], char out[], int i, int j){
    //base case
    if (inp[i] == '\0'){
        out[j] = '\0';
        cout << out << endl;
        return ;
    }
    //recursive case
    
    //f(i,j) = take decisions for inp[i..n-1]
    
    //option 1: include inp[i] to th out[]
    out[j] = inp[i];
    f(inp, out, i+1, j+1);
    
    //option 2: exclude inp[i] from the out[]
    f(inp, out, i+1, j);
}

int main() {
    char inp[] = "abc";
    char out[10];
    
    f(inp, out, 0, 0);
    return 0;
}
