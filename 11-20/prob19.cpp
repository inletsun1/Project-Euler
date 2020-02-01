#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int days = 0;
    int week = 7;
    int year = 1900;
    int month = 1;
    int date = 1;
    int sundays = 0;
    while(true){
        if(month == 12 && date == 31){
            ++year;
            month = 1;
            date = 1;
        }else if((month == 4 || month == 6 || month == 9 || month == 11) && date == 30){
            ++month;
            date = 1;
        }else if(month == 2){
            if(((year % 4 == 0) && !((year % 400 != 0) && (year % 100 == 0)) && date == 29) || (date == 28)){
                ++month;
                date = 1;
            }else{
                ++date;
            }
        }else if(date == 31){
            ++month;
            date = 1;
        }else{
            ++date;
        }
        ++days;
        days %= week;
        //cout << year << ' ' << month << ' ' << date << endl;
        if(year > 1900 && date == 1 && days == 6) ++sundays;
        if(year == 2000 && month == 12 && date == 31) break;
    }
    cout << sundays << endl;
}
