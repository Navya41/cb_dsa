#include <bits/stdc++.h>
using namespace std;

void f(char inp[], int i){
    if (inp[i] == '\0') return;
    if (inp[i]=='p' and inp[i+1] == 'i'){
        int j = i+2;
        while (inp[j] != '\0'){
            j++;
        }
        while (j>=i+2){
            inp [j+2] = inp[j];
            j--;
        }
        
        inp[i] = '3';
        inp[i+1] = '.';
        inp[i+2] = '1';
        inp[i+3] = '4';
        f(inp, i+4);
    }
    else{
        f(inp,i+1);
    }
}

int main() {
	char inp[20] = "pippi";
	//int n = sizeof(arr)/sizeof(int);
	f(inp, 0);
	cout << inp << endl;
	return 0;
}
