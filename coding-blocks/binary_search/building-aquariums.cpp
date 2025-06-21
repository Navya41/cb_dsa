#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool aquarium (vector<int>& a,int n, int m, int x){
    long long sum = 0;
    for (int hgt : a){
        sum = sum + max(0,m-hgt);
    }
    return sum <= x;
    
}
int main() {
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int s = 1;
        int e = 2e9;
        int ans=0;
        while (s<=e){
            int m = s+(e-s)/2;
            if (aquarium(a,n, m, x)) {
                ans = m;
                s = m+1;
            }
            else {
                e = m-1;
            }
        }
        cout << ans<< endl;
    }
    return 0;
}
