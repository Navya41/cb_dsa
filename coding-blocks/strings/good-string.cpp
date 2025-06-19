//time: n.const ~ O(n) where n is the length of the string
//space: O(1)
#include <bits/stdc++.h>
using namespace std;
bool isGoodString(string str){
    for (char ch : str){
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
            return false;
        }
    }
    return true;
}
int main() {
	string str = "aeioue";
	isGoodString(str)?cout<<"good"<<endl:cout << "not good" << endl;
    return 0;
}
