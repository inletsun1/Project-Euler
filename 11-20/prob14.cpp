#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 1000000;
    ll ans = 0;
    ll maxcounter = 0;
    for(ll i = 1; i < N; i++){
        ll counter = 1;
        ll n = i;
        while(n > 1){
            if(n % 2 == 0){
                n /= 2;
            }else{
                n = 3 * n + 1;
            }
            ++counter;
        }
        if(counter >= maxcounter){
            maxcounter = counter;
            ans = i;
        }
    }
    cout << ans << endl;
}
