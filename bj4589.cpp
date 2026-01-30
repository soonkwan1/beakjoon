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
    cout << "Gnomes:" << endl;
    while (n--){
        int a, b, c; cin >> a >> b >> c;
        if (a > b && b > c) cout << "Ordered" << endl;
        else if (a < b && b < c) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
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