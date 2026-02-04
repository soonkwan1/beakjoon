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
    int limit, n; cin >> limit >> n;
    if (n >= limit + 31) cout << "You are speeding and your fine is $500." << endl;
    else if (n >= limit + 21) cout << "You are speeding and your fine is $270." << endl;
    else if (n >= limit + 1) cout << "You are speeding and your fine is $100." << endl;
    else cout << "Congratulations, you are within the speed limit!" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}