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
    int n; cin >> n;
    int res = 0;
    for (int i=0; i<5; i++){
        int tmp; cin >> tmp;
        if (tmp == n) res++;
    }

    cout << res << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}