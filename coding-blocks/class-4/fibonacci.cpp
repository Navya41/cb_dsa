#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n==0||n==1){
		cout<<n<<endl;
	}
	else {
		int a=0;
		int b=1;
		int c=a+b;
		int i=1;
		while(i<n-1){
			a=b;
			b=c;
			c=a+b;
			i++;
		}
		cout << c << endl;
	}
	return 0;
}