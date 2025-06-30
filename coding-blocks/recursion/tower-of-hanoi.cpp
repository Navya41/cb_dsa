#include <bits/stdc++.h>
using namespace std;
void f(int n, char src, char dst, char hlp){
    if (n==0) return;
    f(n-1,src, hlp, dst);
    cout << "move disk from "<< src << " to " << dst << endl;
    f(n-1,hlp,dst,src);
}
int main() {
	int n = 3;
	f(n, 'A', 'C', 'B');
	return 0;
}
