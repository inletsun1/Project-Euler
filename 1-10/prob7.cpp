#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N;
    cin >> N;
    ll counter = 0;
    ll tmp_prime;
    vector<ll> primes;
    for(ll i = 2; ; i++){
        ll flag = true;
        for(ll j = 0; j < primes.size(); j++){
            if(i % primes[j] == 0){
                flag = false;
                break;
            } 
        }
        if(flag){
            primes.push_back(i);
            ++counter;
        } 
        if(counter == N) break; 
    }

    cout << primes[primes.size()-1] << endl;
}
