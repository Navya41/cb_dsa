#include<bits/stdc++.h>
#include<climits>
using namespace std;
int targetSumPair (vector<int>& v, int t){
    int i = 0, j= v.size()-1; 
    int cnt = 0;
    while (i<j){
        int pairSum = v[i]+v[j];
        if (pairSum==t) {
            cnt++; i++; j--;
        }
        else if (pairSum>t){
            j--;
        }
        else {
            i++;
        }
    }
    return cnt;
}
int main() {
	vector<int> v = {10,20,30,40,50,60};
	int t = 60;
	cout << targetSumPair(v,t);
	
    return 0;
}
