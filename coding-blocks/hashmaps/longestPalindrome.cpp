#include <bits/stdc++.h>
#include <set>

using namespace std;

int longestPalindrome(string& str){
    set<int> s;
    int ans=0;
    for ( char ch : str){
        if (s.find(ch) == s.end()){
            s.insert(ch);
        } else {
            ans += 2;
            s.erase(ch);
        }
    }
    if (s.size()>0) ans++;
    return ans;
}

int main() {
	string str = "abcccdd";
	cout << longestPalindrome(str) << endl;
    return 0;
}
