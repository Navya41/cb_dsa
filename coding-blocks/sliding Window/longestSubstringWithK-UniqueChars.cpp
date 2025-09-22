#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "aabacbebebec";
	int n = s.size();
	int k = 3;
	int i =0, j=0;
	int maxLen = 0;
	int UniqCnt = 0;
	int freqMap[26] = {0};
	while (j<n) {
	    freqMap[s[j]-'a']++;
	    if (freqMap[s[j]-'a']==1){
	        UniqCnt++;
	    }
	    if (UniqCnt>k){
	        while (UniqCnt>k){
	            freqMap[s[i]-'a']--;
	            if (freqMap[s[i]-'a']==0) UniqCnt--;
	            i++;
	        }
	    }
	    if (UniqCnt == k) {
	        maxLen = max (maxLen, j-i+1);
	    }
	    j++;
	}
	cout << maxLen << endl;
    return 0;
}
