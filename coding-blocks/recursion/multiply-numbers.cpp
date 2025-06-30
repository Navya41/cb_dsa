#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    //base case
    if (y==0) return 0;
    
    //recursive case 
    return x+f(x,y-1);
}

int main() {
	int x =4, y=5;
	cout << f(x,y) << endl;
    return 0;
}
