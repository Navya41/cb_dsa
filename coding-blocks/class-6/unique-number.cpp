#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    int x;
    cin >> n; 
    int ans=0;
    for (int i=1; i<=n; i++){
        cin >> x;
        ans = ans^x;
    }
    cout << ans;
    return 0;
}
