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
    int app = 0, rej = 0, gup = 0;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (tmp == 1) app++;
        else if (tmp == -1) rej++;
        else gup++;
    }
    
    if (gup >= app + rej) cout << "INVALID" << endl;
    else if (app > rej) cout << "APPROVED" << endl;
    else cout << "REJECTED" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}