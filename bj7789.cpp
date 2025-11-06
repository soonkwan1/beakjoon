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

bool eratos(int k){
    int cnt = 0;
    for (int i=1; i<=sqrt(k); i++){
        if (k % i == 0){
            if (k / i == i) cnt++;
            else cnt += 2;

            if (cnt > 2) return false;
        }
    }

    return true;
}

void INPUT(){
    string line; cin >> line;
    char ch; cin >> ch;
    int n = stoi(ch + line);
    int prev = stoi(line);
    if (eratos(n) && eratos(prev)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}