#include <bits/stdc++.h>
using namespace std;
void game (int n, vector<int>& v){
    int serejaScore=0, dimaScore=0;
    bool flag=1;
    int i=0, j=n-1;
    while (i<=j){
        if (v[i]>v[j]){
            if (flag==1){
                serejaScore=serejaScore+v[i];
                flag=!flag;
            }
            else if (!flag) {
                dimaScore=dimaScore+v[i];
                flag = !flag;
            }
            i++;
        }
        else {
            if (flag==1){
                serejaScore=serejaScore+v[j];
                flag=!flag;
            }
            else if (!flag) {
                dimaScore=dimaScore+v[j];
                flag = !flag;
            }
            j--;
        }
    }
    cout << serejaScore << " " << dimaScore;
}
int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    game (n,v);
    return 0;

}
