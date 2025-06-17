#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;
bool cmp(string a, string b){
    if (a.size()<b.size()){
        return true;
    }
    return false;
}
int main() {
	vector<string> v;
	v.push_back("hiya");
	v.push_back("bhavya");
	v.push_back("priyanka");
	v.push_back("h");
	//sort(v.begin(),v.end(),greater<string>());
	sort(v.begin(),v.end(),cmp);
	for (string name : v){
	    cout << name << endl;
	}
    return 0;
}
