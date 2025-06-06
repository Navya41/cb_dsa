#include <bits/stdc++.h>
#include<climits>
using namespace std;
void myswap(int& a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
int main() {
    int a,b;
    cin >> a >> b;
    myswap(a,b);
    cout << a << " " << b;
    return 0;
}