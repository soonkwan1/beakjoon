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
    vector<int> stocks(14);
    for (int i=0; i<14; i++) cin >> stocks[i];

    int increasing[14]; fill_n(increasing, 14, 0);
    int decreasing[14]; fill_n(decreasing, 14, 0);
    for (int i=1; i<14; i++){
        if (stocks[i] > stocks[i-1]) increasing[i] = increasing[i-1] + 1;
        else if (stocks[i] < stocks[i-1]) decreasing[i] = decreasing[i-1] + 1;
    }

    int a_num = 0;
    int a_total = n;
    int b_num = 0;
    int b_total = n;
    for (int i=0; i<14; i++){
        a_num += a_total / stocks[i];
        a_total = a_total % stocks[i];
        if (increasing[i] >= 3){
            b_total += stocks[i] * b_num;
            b_num = 0;
        }
        else if (decreasing[i] >= 3){
            b_num += b_total / stocks[i];
            b_total = b_total % stocks[i];
        }
    }

    int ans_a = a_total + a_num * stocks[13];
    int ans_b = b_total + b_num * stocks[13];
    if (ans_a > ans_b) cout << "BNP" << endl;
    else if (ans_b > ans_a) cout << "TIMING" << endl;
    else cout << "SAMESAME" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}