#include <bits/stdc++.h>
using namespace std;
int rudenessOfString(string str){
    int rudeness= 0;
    for (int i=0; i<str.size()-1; i++){
        int cnt = 0;
        if (str[i]=='a') {
            for (int j=i; j<str.size();j++){
                if (str[j]=='b'){
                    cnt++;
                }
            }
            rudeness += cnt;
        }
    }
    return rudeness;
}
int main() {
	string str = "ababbaab";
	cout << rudenessOfString(str);
    return 0;
}
