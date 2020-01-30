#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        int hoge;
        hoge = (int) s[i] - (int) '0';
        cout << hoge <<' ';
        ans += hoge;
    }
    cout << ans;
}
