#include <bits/stdc++.h>
#include <string>
using namespace std;
int countPalindromicSubstrings(string& str){
    int cnt =0;
    int n = str.size();
    //1.find out no. of odd-length palindromic substrings in string
    for (int i=0; i<n; i++){
        int j = 0;
        while ((i-j>=0) and (i+j<=n-1) and (str[i-j]==str[i+j])){
            cnt++; 
            j++;
        }
    }
    //2.find out no. of even-length palindromic substrings in string
    for (double i=0.5; i<n; i++){
        double j = 0.5;
        while ((i-j>=0) and (i+j<=n-1) and (str[i-j]==str[i+j])){
            cnt++; 
            j++;
        }
    }
    return cnt;
}
int main() {
	string str = "abaaba";
	cout << countPalindromicSubstrings(str) << endl;
    return 0;
}
