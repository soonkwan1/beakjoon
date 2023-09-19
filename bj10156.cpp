#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    int k, n, m;
    cin >> k >> n >> m;
    m -= k*n;
    if (m>=0){
        cout << 0 << "\n";
    }
    else{
        cout << -m << "\n";
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}