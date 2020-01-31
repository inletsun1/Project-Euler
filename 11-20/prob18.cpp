#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    vector<vector<ll>> triangle(15);
    vector<vector<ll>> f(15);
    for(ll i = 0; i < 15; i++){
        for(ll j = 0; j <= i; j++){
            ll tmp;
            cin >> tmp;
            triangle[i].push_back(tmp);
            f[i].push_back(0);
        }
    }
    f[0][0] = triangle[0][0];
    for(ll i = 1; i < 15; i++){
        for(ll j = 0; j <= i; j++){
            if(j == 0){
                f[i][j] = f[i-1][j] + triangle[i][j];
            }else if(j == i){
                f[i][j] = f[i-1][j-1] + triangle[i][j];
            }else{
                f[i][j] = max(f[i-1][j], f[i-1][j-1]) + triangle[i][j];
            }
        }
    }

    ll ans = 0;
    for(ll j = 0; j < 15; j++){
        ans = max(ans, f[14][j]);
    }
    cout << ans << endl;
}
