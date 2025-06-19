#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isPalindrom(string str){
    int i=0, j=str.size()-1;
    while (i<=j){
        if (str[i]!=str[j]) return false;
        i++; j--;
    }
    return true;
}
//time : O(n^3)
//space : O(n) due to substrings
int NumberofPalindroms(string& str){
    int n=str.size();
    int cnt = 0;
    for (int i=0; i<=n-1; i++){
        for (int j=i; j<=n-1; j++){
            string substr = str.substr(i,j-i+1);
            if (isPalindrom(substr)) cnt++;
        }
    }
    return cnt;
}
int main() {
	string str = "abaaba";
	cout << NumberofPalindroms(str) << endl;
    return 0;
}
