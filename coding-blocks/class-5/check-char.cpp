#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	if (ch >='A' and ch<='Z'){
	    cout << "Uppercase" << endl;
	}
	else if (ch >= 97 and ch <= 122) {
	    cout << "Lowercase" << endl; 
	}
	else if (ch>= 48 and ch <= 57){
	    cout << "Digit" << endl;
	}
	else {
	    cout << "Special Character" << endl;
	}
	return 0;
}