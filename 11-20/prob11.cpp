#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 20;
    ll m[N][N];
    ll ans = 0;
    for(ll i = 0; i < N; ++i){
        for(ll j = 0; j < N; ++j){
            cin >> m[i][j];
        }
    }
    for(ll i = 0; i < N; ++i){
        for(ll j = 0; j < N; ++j){
            //down
            if(i < N - 3) ans = max(ans, m[i][j] * m[i+1][j] * m[i+2][j] * m[i+3][j]);
            //right
            if(j < N - 3) ans = max(ans, m[i][j] * m[i][j+1] * m[i][j+2] * m[i][j+3]);
            //diagonally right down
            if(i < N - 3 && j < N - 3) ans = max(ans, m[i][j] * m[i+1][j+1] * m[i+2][j+2] * m[i+3][j+3]);
            //diagonally left down
            if(i < N - 3 && j > 3) ans = max(ans, m[i][j] * m[i+1][j-1] * m[i+2][j-2] * m[i+3][j-3]);
        }
    }
    
    cout << ans << endl;
}
