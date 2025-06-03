#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch; int cnt =0; int lc=0, uc=0, sc=0, wc=0, dc=0;
	while (true){
	    ch = cin.get();
	    if (ch=='$'){
	        break;
	    }
	    cnt++;
	    if (ch >='A' and ch<='Z'){
	        uc++;
	    }
	    else if (ch >= 97 and ch <= 122) {
	        lc++; 
	   }
	    else if (ch>= 48 and ch <= 57){
	        dc++;
	    }
	    else if (ch==' '|| ch=='\t' || ch=='\n'){
	        wc++;
	    }
	    else {
	        sc++;
	    }
	}
	cout<< "Count: " << cnt << endl; 
	cout<< "LowerCaseCount: " << lc << endl; 
	cout<< "UpperCase Count: " << uc << endl; 
	cout<< "Digit Count: " << dc << endl; 
	cout<< "Whitespace Count: " << wc << endl; 
	cout<< "Spcial Char Count: " << sc << endl; 
	return 0;
}