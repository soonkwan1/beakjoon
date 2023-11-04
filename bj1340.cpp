#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#define endl "\n"
#define ll long long
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int stringToInt(string month){
    if (month == "January") return 1;
    if (month == "Fabruary") return 2;
    if (month == "March") return 3;
    if (month == "April") return 4;
    if (month == "May") return 5; 
    if (month == "June") return 6;
    if (month == "July") return 7;
    if (month == "August") return 8;
    if (month == "September") return 9;
    if (month == "October") return 10; 
    if (month == "November") return 11;
    return 12;
}
int dayToInt(string day){
    string tmp = "";
    tmp += day[0]; tmp += day[1];
    return (stoi(tmp) - 1) * 24 * 60;
}
int timeToInt(string time){
    string hour_part = "";
    string min_part = "";
    hour_part += time[0]; hour_part += time[1];
    min_part += time[3]; min_part += time[4];
    return (stoi(hour_part)) * 60 + stoi(min_part);
}
void INPUT(){
    string month, day, time;
    int year;
    cin >> month >> day >> year >> time;

    int flow[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 윤년이면 1, 아니면 0
    int flag = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? 1 : 0;
    flow[2] = flag == 1? 29 : 28;
    int total_time = flag == 1? 366 * 24 * 60 : 365 * 24 * 60;
    
    int month_cum[13] = {0, };
    for (int i=1; i<13; i++){
        month_cum[i] = month_cum[i-1] + flow[i];
    }

    int now = 0;
    now = month_cum[stringToInt(month) - 1] * 24 * 60 + dayToInt(day) + timeToInt(time);

    // cout.precision(15);
    cout << setprecision(11);
    cout << (double)now / (double)total_time * 100 << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}