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
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    int n; cin >> n;
    int start_year = 2024; int start_month = 8;

    start_month += 7 * (n - 1);
    start_year += start_month / 12;
    start_month -= 12 * (start_month / 12);
    if (start_month == 0){
        start_year--;
        start_month = 12;
    }


    cout << start_year << " " << start_month << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}