#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s; 
    cin >> s;
    ll N = s.size();
    ll ans = 0;
    ll n = 13;
    for(ll i = 0; i < N - n + 1; i++){
        ll tmp = 1;
        for(int j = i; j <= i + n - 1; j++){
            tmp *= (ll) s[j] - (ll) '0';
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}
