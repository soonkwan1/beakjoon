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
    cout.precision(2);
    while (t--){
        double num; cin >> num;
        string line; getline(cin, line);
        
        for (int i=0; i<line.size(); i++){
            if (line[i] == '#') num -= 7;
            else if (line[i] == '@') num *= 3;
            else if (line[i] == '%') num += 5;
        }
        if (num == 0) cout << 0 << endl;
        else cout << num << endl;
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