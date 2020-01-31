#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N;
    cin >> N;
    vector<bool> isPrime(N + 1, true);
    for(ll i = 2; i * i < N; i++){
        if(isPrime[i]){
            for(ll j = 2; j * i < N; j++){
                isPrime[i*j] = false;
            }
        }
    }
    ll ans = 0;
    for(ll i = 2; i < N; i++){
        if(isPrime[i]) ans += i;
    }
    cout << ans << endl;
}
