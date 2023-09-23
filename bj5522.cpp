#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    long long res = 0;
    int idx = 5;
    while (idx--){
        long long tmp; cin >> tmp;
        res += tmp;
    }
    cout << res << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}