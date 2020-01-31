#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    map<ll, ll> num2let;
    num2let[0] = 0;
    num2let[1] = 3;
    num2let[2] = 3;
    num2let[3] = 5;
    num2let[4] = 4;
    num2let[5] = 4;
    num2let[6] = 3;
    num2let[7] = 5;
    num2let[8] = 5;
    num2let[9] = 4;
    num2let[10] = 3;
    num2let[11] = 6;
    num2let[12] = 6;
    num2let[13] = 8;
    num2let[14] = 8;
    num2let[15] = 7;
    num2let[16] = 7;
    num2let[17] = 9;
    num2let[18] = 8;
    num2let[19] = 8;
    num2let[20] = 6;
    num2let[30] = 6;
    num2let[40] = 5;
    num2let[50] = 5;
    num2let[60] = 5;
    num2let[70] = 7;
    num2let[80] = 6;
    num2let[90] = 6;
    num2let[100] = 7;
    num2let[1000] = 8 + num2let[1];
    ll and2let = 3;

    ll N = 1000;
    ll ans = 0;
    for(ll i = 1; i <= N; i++){
        ll tmp = 0;
        //thousands digit
        if(i == 1000){
            tmp += num2let[i];
        }
        //hundreds digit
        ll hundreds_digit = i / 100 % 10;
        if(hundreds_digit > 0){
            tmp += num2let[hundreds_digit] + num2let[100];
            if(i % 100 > 0) tmp += and2let;
        }
        //tens digit
        ll tens_digit = i / 10 % 10;
        bool isOnesdigit = false;
        if(i % 10 > 0) isOnesdigit = true;
        if(tens_digit > 0){
            if(tens_digit == 1){
                tmp += num2let[i % 100];
                isOnesdigit = false;
            }else{
                tmp += num2let[tens_digit * 10];
            }
        }

        //ones digit
        if(isOnesdigit) tmp += num2let[i%10];

        ans += tmp;

    }
    cout << ans << endl;
}
