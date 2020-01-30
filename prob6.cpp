#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N;
    cin >> N;
    ll sum_sqr = 0; 
    ll sqr_sum = 0;
    for(ll i = 1; i <= N; i++){
        sum_sqr += i * i;
        sqr_sum += i;
    }
    cout << sqr_sum * sqr_sum - sum_sqr << endl;
}
