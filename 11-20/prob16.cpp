#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll N = 1000;
ll memo[N+1][N+1];

ll f(ll n, ll i){
    if(n == 0 && i == 1) return memo[n][i] = 1;
    if(n == 0 || i == 0) return memo[n][i] = 0;
    if(memo[n][i] > -1) return memo[n][i];
    return memo[n][i] = 2 * f(n-1, i) % 10 + 2 * f(n - 1, i-1) / 10;
}
int main(){
    for(ll i = 0; i < N + 1; i++){
        for(ll j = 0; j < N + 1; j++){
            memo[i][j] = -1;
        }
    }
    ll ans = 0;
    for(ll i = 0; i < N + 1; i++){
        ans += f(N, i);
    }
    cout << ans << endl;
}
