#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> primes;
    ll triangle_num = 0;
    for(ll i = 1; ; ++i){
        triangle_num += i;
        ll divisors = 0;
        for(ll j = 1; j * j <= triangle_num; ++j){
            if(triangle_num % j == 0){
                if(j * j < triangle_num) divisors += 2;
                else divisors += 1;
            }
        }
        //cout << "triangle_num : " << triangle_num << ", divisors : " << divisors << endl;
        if(divisors > N){
            cout << triangle_num << endl;
            break;
        }
    }
}
