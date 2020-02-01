#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 100;
    ll M = 202;
    ll factorial_ni[N+1][M];
    for(ll n = 0; n <= N; n++){
        for(ll i = 0; i < M; i++){
            factorial_ni[n][i] = 0;
        }
    }
    factorial_ni[1][1] = 1;
    ll advance[M];
    for(ll i = 0; i < M; i++) advance[i] = 0;
    for(ll n = 2; n <= N; n++){
        for(ll i = 1; i < M; i++){
            factorial_ni[n][i] = n * factorial_ni[n-1][i] % 10 + n * factorial_ni[n-1][i-1] / 10 + advance[i];
            if(i < M - 1) advance[i+1] = factorial_ni[n][i] / 10;
            factorial_ni[n][i] %= 10;
            advance[i] = 0;
        }
    }
    ll ans = 0;
    for(ll i = 1; i < M; i++) ans += factorial_ni[N][i];
    cout << ans << endl;

}
