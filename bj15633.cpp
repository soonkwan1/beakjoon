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

int n;
void INPUT(){
    cin >> n;
}
void SOLUTION(){
    int total = 0;
    for (int i=1; i<=sqrt(n); i++){
        if (n % i == 0) {
            total += i;
            if (n / i != i) total += n / i;
        }
    }
    cout << (total * 5) - 24 << endl;   
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}