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
    int d, m; cin >> d >> m;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> v; v.push_back(0); v.push_back(0);
    int tmp = 0;
    for (int i=1; i<13; i++){
        tmp += days[i];
        v.push_back(tmp);
    }

    string weeks[7] = {"Wednesday", "Thursday", "Friday", "Saturday",
    "Sunday", "Monday", "Tuesday"};

    cout << weeks[(d + v[m]) % 7] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}