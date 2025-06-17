//not optimal solution 
//unnecesaary substrings are being created

#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isGoodString(string str){
    for (char ch : str){
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
            return false;
        }
    }
    return true;
}
// time : O(n^3)
int longestGoodString(string& str){
    int n = str.size();
    int maxSofar = 0;
    for (int i=0; i<=n-1; i++){
        for (int j=i; j<=n-1; j++){
            string substr = str.substr(i,j-i+1);
            if(isGoodString(substr)){
                maxSofar = max(maxSofar,j-i+1);
            }
        }
    }
    return maxSofar;
}
int main() {
	string str = "cbaeicdeiou";
	cout << longestGoodString(str);
    return 0;
}
