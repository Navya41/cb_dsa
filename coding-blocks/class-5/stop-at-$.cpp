#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch; int cnt =0;
	while (true){
	    cin >> ch;
	    if (ch=='$'){
	        break;
	    }
	    cnt++;
	}
	cout << cnt; 
	return 0;
}