#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 1000;
    bool flag = true;
    for(ll a = 1; a <= N && flag; a++){
        for(ll b = a + 1; b <= N && flag; b++){
            for(ll c = b + 1; c <= N && flag; c++){
                if(a * a + b * b == c * c && a + b + c == N){
                    cout << a * b * c << endl;
                    flag = false;
                }
            }
        }
    }
}
