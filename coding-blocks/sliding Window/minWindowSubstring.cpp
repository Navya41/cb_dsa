#include <bits/stdc++.h>
using namespace std;
string minWindow (string& s, string& t){
    int m = s.size();
    int n = t.size();
    unordered_map <char,int> tFreq;
    int tCnt = 0;
    for (int i=0; i<n; i++){
        char ch = t[i];
        tFreq[ch]++;
    }
    tCnt = tFreq.size();
    
    int i = 0;
    int j = 0;
    int min_length = INT_MAX;
    int s_idx = 0;
    while (j<m){
        char ch = s[j];
        //expand the window
        if (tFreq.find(ch) != tFreq.end()){
            tFreq[ch]--;
            if (tFreq[ch] == 0){
                tCnt--;
            }
        }
        //check the validity
        if (tCnt==0){
            //found a valid window 
            if (j-i+1 < min_length){
                min_length = j-i+1;
                s_idx = i;
            }
            //optimise the window min_length
            while (tCnt==0){
                char out = s[i];
                if (tFreq.find(out)!=tFreq.end()){
                    //'out' is in t
                    tFreq[out]++;
                    if (tFreq[out] == 1){
                        i++;
                        tCnt++;
                    } else {
                        i++;
                        if (j-i+1 < min_length){
                            min_length = j-i+1;
                            s_idx = i;
                        }
                    }
                } else {
                    i++;
                    if (j-i+1 < min_length){
                        min_length = j-i+1;
                        s_idx = i;
                    }
                }
            }
        }
        j++;
    }
    return min_length==INT_MAX ? "" : s.substr(s_idx, min_length);
}
int main() {
	string s = "adobecodebanc";
	string t = "abc";
	cout << minWindow (s,t) << endl;
	return 0;
}
