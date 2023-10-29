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
    int month, day; cin >> month >> day;
    int ans = month * 32 + day;
    ans < 82 ? cout << "Before" : ans == 82 ? cout << "Special" : cout << "After";
    cout << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}