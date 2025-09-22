#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    char ch; 
    bool terminal;
    map<char, node*> childMap;
    int freq;
    
    node(char ch){
        this->ch = ch;
        this->terminal = false;
        this->freq = 0;
    }
};
class trie {
    node* root;
    public:
    trie(){
        root = new node('#');
    }
    void insert(const string& str) {
        node* cur = root;
        for (char ch : str){
            if (cur->childMap.find(ch)==cur->childMap.end()){
                //there is no child node with the value ch
                node* n = new node(ch);
                cur->childMap[ch] = n;
            }
            cur = cur->childMap[ch];
            cur->freq++;
        }
        cur->terminal = true;
    }
    string shortestUniquePrefix(const string& str){
        node* cur = root;
        string ans = "";
        for (char ch : str){
            ans+=ch;
            cur = cur->childMap[ch];
            if (cur->freq == 1){
                return ans;
            }
        }
        return "";
    }
};
int main() {
	string words[] = {"code","coder","coding","new","neon"};
	trie t;
    for (string word : words){
        t.insert(word);
    }
    for (string word : words){
        cout << "uniquePrefix(" << word << ") = " << t.shortestUniquePrefix(word) << endl;
    }
    return 0;
}
