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
    int r1, s;
    cin >> r1 >> s;
    cout << 2*s - r1 << "\n";

}

int main(){
    INIT();
    INPUT();
    return 0;
}
