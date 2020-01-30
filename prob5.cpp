#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll N;
    cin >> N;
    map<ll, ll> primefact;
    vector<bool> isPrime;
    for(int i = 0; i <= N; i++) isPrime.push_back(true);
    ll ans = 1;
    for(int i = 2; i <= N; i++){
        if(isPrime[i]){
            primefact[i] = 1;
            for(ll j = 2; j * i <= N; j++){
                isPrime[i*j] = false;
                ll tmp = i * j;
                ll tmpfact = 0;
                while(tmp % i == 0){
                    tmp /= i;
                    tmpfact += 1;
                }
                //cout << "prime i : " << i << ", j : " << j << ", tmpfact : " << tmpfact << endl;
                primefact[i] = max(primefact[i], tmpfact);
            }
            //cout << "prime i : " << i << ", index : " << primefact[i] << endl;
            for(int j = 1; j <= primefact[i]; j++) ans *= i;
        }
    }
    cout << ans << endl;
}
