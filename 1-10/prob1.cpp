#include<iostream>
using namespace std;

int main(){
    long long int N;
    cin >> N;
    long long int ans = 0;
    for(int i = 1; i < N; i++){
        if(i % 3 == 0 || i % 5 == 0){
            ans += i;
        }
    }
    cout << ans << endl;
}
