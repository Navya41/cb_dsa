#include <bits/stdc++.h>
using namespace std;
bool isAnagram(int tfreqMap[], int wfreqMap[]){
    for (int i = 0; i<26; i++){
        if (tfreqMap[i] != wfreqMap[i]) return false;
    }
    return true;
}
int main() {
	string s = "cbaebabacdbca";
	string t = "abc";
	int n = s.size();
	int k = t.size();
	int cnt = 0;
	int tfreqMap[26] = {0};
	int wfreqMap[26] = {0};
	int i = 0;
	for (i=0; i<k; i++){
	    tfreqMap[t[i]-'a']++;
	}
	int j = 0;
	while (j<k){
	    wfreqMap[s[j]-'a']++;
	    j++;
	}
	if (isAnagram(tfreqMap,wfreqMap)) cnt++;
	i = 0;
	while (j<n){
	    wfreqMap[s[i]-'a']--;
	    i++;
	    wfreqMap[s[j]-'a']++;
	    j++;
	    if (isAnagram(tfreqMap,wfreqMap)) cnt++;
	}
	cout << cnt << endl;
    return 0;
}
