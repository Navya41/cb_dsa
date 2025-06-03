#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; 
    cin >> n >> k;
    int res = n>>k;
    if (1&res) cout << "True" << endl;
    else cout<<"False" <<endl;
    return 0;
    
    //if (n&(1<<k)==0) cout << "False";
    //else cout << "True";
}
