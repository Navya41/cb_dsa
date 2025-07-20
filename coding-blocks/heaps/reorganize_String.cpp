#include <bits/stdc++.h>
using namespace std;
string reorganise(string& str){
    int freq[26] = {0};
    for (char ch : str){
        freq[ch-'a']++;
    }
    priority_queue<pair<int, char>> maxHeap;
    for (int i=0; i<26; i++){
        if (freq[i]>0){
            maxHeap.push({freq[i],i+'a'});
        }
    }
    string ans = "";
    while (!maxHeap.empty()){
        if (maxHeap.size() == 1){
            pair<int, char> maxPair = maxHeap.top();
            maxHeap.pop();
            if (maxPair.first==1){
                ans += maxPair.second;
            } else {
                ans = "";
            }
        } else {
            pair<int, char> firstMax = maxHeap.top();
            maxHeap.pop();
            
            pair<int, char> secondMax = maxHeap.top();
            maxHeap.pop();
            
            ans+=firstMax.second;
            firstMax.first--;
            
            if (firstMax.first>0){
                maxHeap.push(firstMax);
            }
            
            ans+=secondMax.second;
            secondMax.first--;
            if (secondMax.first>0){
                maxHeap.push(secondMax);
            }
        }
    }
    return ans;
}
int main() {
	string str = "aaaaabbbbcccdd";
	cout << reorganise(str) << endl;
    return 0;
}
