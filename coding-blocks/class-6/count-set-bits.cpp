#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt=0; 
    cin >> n;
    while (n>0){
        //turn off right most set bit of n
        n = n&(n-1);
        cnt ++ ;
    }
    cout << cnt << endl;
    return 0;
}
