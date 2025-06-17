#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
bool check_anagram(char s1[], char s2[]){
    vector<int> str1(26,0);
    vector<int> str2(26,0);
    for (int i =0; i<strlen(s1); i++){
        str1[s1[i]-'a']++;
    }
    for (int i=0; i<strlen(s2); i++){
        str2[s2[i]-'a']++;
    }
    int i =0;
    while (i<26){
        if (str1[i]!=str2[i]) return 0;
        i++;
    }
    return 1;
}
int main() {
	char s1[]="state";
	char s2[]="taste";
	check_anagram(s1,s2)? cout<<"anagrams" <<endl : cout << "not anagrams" <<endl;
	return 0;
}
