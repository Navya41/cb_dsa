#include <bits/stdc++.h>
#include<string>
#define ll long long 
using namespace std;

string s;
int nb, ns, nc;
int pb, ps, pc;
int cb, cs, cc;
ll r;

bool canPolycarpusCook(ll m){
    ll eb = max(0ll, m*cb-nb);
    ll es = max(0ll, m*cs-ns);
    ll ec = max(0ll, m*cc-nc);
    ll er = eb*pb + es*ps + ec*pc;
    return (er<=r);
}
int main() {
    getline(cin,s);
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    
    for (char c : s){
        if (c=='B') cb++;
        else if (c=='S') cs++;
        else if (c=='C') cc++;
    }
    ll lo = 0;
    ll hi = 1e12 + 100;
    ll ans = 0;
    while (lo<=hi){
        ll m = lo + (hi-lo)/2;
        if (canPolycarpusCook(m)){
            ans = m;
            lo = m+1;
        }
        else {
            hi = m-1;
        }
    }
    cout << ans;
    return 0;
}
