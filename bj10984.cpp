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
    int t; cin >> t;
    cout << fixed;
    cout.precision(1);
    while (t--){
        int n; cin >> n;
        vector<double> v;
        int total = 0;
        double grade = 0;
        for (int i=0; i<n; i++){
            double tmp1, tmp2; cin >> tmp1 >> tmp2;
            total += tmp1;
            grade += tmp2 * (double)tmp1;
        }
        cout << total << " " << grade / double(total) << endl;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}