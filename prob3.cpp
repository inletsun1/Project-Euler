#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 600851475143; 
    //ll N = 100;
    ll rN = (ll) sqrt(N);
    vector<bool> isPrime;
    for(ll i = 0; i <= rN; i++){
        isPrime.push_back(true);
    }
    for(ll i = 2; i <= rN; i++){
        if(isPrime[i]){
            for(ll j = 2; i * j <= rN; j++){
                isPrime[i*j] = false;
            }
        }
    }
    for(ll i = rN; i >= 2; i--){
        if(isPrime[i] && N % i == 0){
            cout << i << endl;
            break;
        }
    }
    /*
    for(ll i = 2; i <= N; i++){
        if(isPrime[i]) cout << i << ' ';
    }
    */
}

