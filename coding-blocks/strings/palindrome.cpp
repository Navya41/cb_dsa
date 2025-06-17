#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
bool check_palindrome(char s1[]){
    int i=0; int j=strlen(s1)-1;
    while (i<=j){
        if (s1[i]!=s1[j]) break;
        i++; j--;
    }
    if (i>j) return true;
    else return false;
}
int main() {
	char s1[]= "naman";
	check_palindrome(s1) ? cout << "palindrome" << endl : cout << "not a palindrome" << endl;
	return 0;

}
