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
    if (n == 1996 || n == 1997 || n == 2000 || n == 2007
    || n == 2008 || n == 2013 || n == 2018){
        cout << "SPbSU"  << endl;
    }
    else if (n == 2006) cout << "PetrSU, ITMO" << endl;
    else cout << "ITMO" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}