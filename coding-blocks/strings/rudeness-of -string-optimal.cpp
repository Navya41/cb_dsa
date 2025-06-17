#include <bits/stdc++.h>
#include <string>
using namespace std;
int rudenessOfString(string str){
    int rudeness= 0; int cnt=0;
    int n = str.size();
    for (int i=n-1; i>=0; i--){
        if (str[i]=='b') cnt++;
        else rudeness += cnt;
    }
    return rudeness;
}
int main() {
	string str = "ababbaab";
	cout << rudenessOfString(str);
    return 0;
}
