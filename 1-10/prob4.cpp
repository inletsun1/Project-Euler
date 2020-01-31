#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPalindrome(ll n){
    string sN = to_string(n);
    for(ll i = 0; i < sN.size() / 2; i++){
        if(sN[i] != sN[sN.size()-1-i]) return false;
    }
    return true;
}

int main(){
    ll ans = 0;
    for(int i = 100; i <= 999; i++){
        for(int j = i; j <= 999; j++){
            if(isPalindrome(i * j) && (ans < i * j)) ans = i * j;
        }
    }
    cout << ans << endl;
}
