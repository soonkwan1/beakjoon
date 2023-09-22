#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    while (1){
        int n; cin >> n;
        if (n == 0) break;
        cout << n * (n+1) / 2 << "\n";
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}