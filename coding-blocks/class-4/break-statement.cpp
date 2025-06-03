#include<iostream>
using namespace std;
int main(){
	int cnt=0;
	int data;
	while (true){
		cin>>data;
		if (data<0){
			break;
		}
		cnt++;
	}
	cout << "Count: "<< cnt << endl;
	return 0;
}