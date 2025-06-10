#include <bits/stdc++.h>
using namespace std;
void water(int n, vector<int>& v){
    int i = 0, j = n-1;
    int maxWater = 0;
    while (i<j){
        int area = min(v[i],v[j]) * (j-i);
        maxWater = max(maxWater,area);
        if (v[i]<v[j]) i++;
        else j--;
    }
    cout << maxWater;
}
int main() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i=0; i<n; i++){
	    cin >> v[i];
	}
	water (n,v);
	return 0;

}
