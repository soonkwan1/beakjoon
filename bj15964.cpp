#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    long long a, b; cin >> a >> b;
    cout << (a+b) * (a-b) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}