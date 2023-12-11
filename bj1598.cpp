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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int a, b; cin >> a >> b;
    int x1, y1, x2, y2;
    x1 = a % 4 == 0 ? a / 4 - 1 : a / 4;
    x2 = b % 4 == 0 ? b / 4 - 1 : b / 4;
    y1 = a % 4 == 0 ? 4 : a % 4;
    y2 = b % 4 == 0 ? 4 : b % 4;
    
    cout << abs(x1 - x2) + abs(y1 - y2) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}