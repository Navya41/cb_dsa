#include <bits/stdc++.h>
#include <map>
using namespace std;
bool isDuplicate(vector<int>& v){
    map <int, int> freqMap;
    for (int x : v){
        freqMap[x]++;
        if (freqMap[x]>1){
            return true;
        }
    }
    return false;
    
    //to print a map
    //for (auto[el,freq] : freqMap){
    //    cout << el << " : " << freq << endl;
    //}
}
bool isDuplicate2 (vector<int>& v){
    set<int> s;
    for (int x : v){
        if (s.find(x)==s.end()){
            //you're seeing x for the first time
            s.insert(x);
        } else {
            return true;
        }
    }
    return false;
}
int main() {
	vector<int> v = {1, 5, 2, 4, 3, 5};
	isDuplicate(v) ? cout << "Dupicate found" << endl : cout << "Duplicate not found" << endl;
	isDuplicate2(v) ? cout << "Dupicate found" << endl : cout << "Duplicate not found" << endl;
    return 0;
}
