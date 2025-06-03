#include<iostream>
using namespace std;
int main()
{
	cout << "sizeof(int) = " << sizeof(int) << 'B' << endl;
	cout << "sizeof(float) = " << sizeof(float) << 'B' << endl;
	cout << "sizeof(double) = " << sizeof(double) << 'B' << endl;
	cout << "sizeof(char) = " << sizeof(char) << 'B' << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << 'B' << endl;

	cout << sizeof(100) << endl;
	cout << sizeof('x') << endl;
	cout << sizeof(3.14) << endl; //by default, treated like double
	cout << sizeof(3.14f) << endl; //specify f to treat it like a float
	return 0;
}