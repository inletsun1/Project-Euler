#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 20;
    ll nCi[2*N+1][2*N+1];
    for(ll i = 0; i <= 2*N; i++){
        for(ll j = 0; j <= 2*N; j++){
            nCi[i][j] = 0;
        }
    }
    nCi[0][0] = 1;
    for(ll n = 1; n <= 2 * N; n++){
        for(ll i = 0; i <= n; i++){
            if(i == 0 || i == n) nCi[n][i] = 1;
            else nCi[n][i] = nCi[n-1][i-1] + nCi[n-1][i];
        }
    }
    cout << nCi[40][20] << endl;
}
