#include<iostream>
using namespace std;
typedef long long int ll;

int main(){
    ll fib[2] = {1, 2};
    ll ans = fib[1];
    while(fib[1] + fib[0] <= 4000000) {
        ll tmp = fib[1];
        fib[1] += fib[0];
        fib[0] = tmp;
        //cout << fib[1] << ' ';
        if(fib[1] % 2 == 0) ans += fib[1];
    } 
    cout << ans << endl;
}
