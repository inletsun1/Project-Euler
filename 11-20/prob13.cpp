#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N = 100;
    ll M = 50;
    ll m[N][M];
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < M; j++){
            char tmp;
            cin >> tmp;
            m[i][j] = (ll) tmp - (ll) '0';
        }
    }
    ll adv = 0;
    list<ll> ans;
    for(ll j = M - 1; j >= 0; j--){
        for(ll i = 0; i < N; i++){
            adv += m[i][j];
        }
        if(j == 0){
            while(adv > 0){
                ans.push_front(adv % 10);
                adv /= 10;
            }
            while(ans.size() > 10){
                ans.pop_back();
            }
        }else{
            ans.push_front(adv % 10);
            adv /= 10;
            if(ans.size() > 10) ans.pop_back();
        }
    }
    //cout << ans.size() << endl;
    for(list<ll>::iterator it = ans.begin(); it != ans.end(); it++) cout << *it;
    cout << endl;
}
