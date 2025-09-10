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

int charToInt(char a){
    return int(a) - 48;
}
void printTime(int k){
    if (k < 10) cout << 0 << k;
    else cout << k;
}
void INPUT(){
    string line1, line2; cin >> line1 >> line2;
    int h1 = charToInt(line1[0]) * 10 + charToInt(line1[1]);
    int m1 = charToInt(line1[3]) * 10 + charToInt(line1[4]);
    int s1 = charToInt(line1[6]) * 10 + charToInt(line1[7]);

    int h2 = charToInt(line2[0]) * 10 + charToInt(line2[1]);
    int m2 = charToInt(line2[3]) * 10 + charToInt(line2[4]);
    int s2 = charToInt(line2[6]) * 10 + charToInt(line2[7]);

    int t1 = h1 * 60 * 60 + m1 * 60 + s1;
    int t2 = h2 * 60 * 60 + m2 * 60 + s2;

    if (t2 <= t1) t2 += 24 * 60 * 60;

    int t = t2 - t1;
    int a1 = t / 3600; t %= 3600;
    int a2 = t / 60; t %= 60;
    int a3 = t;

    printTime(a1); cout << ":";
    printTime(a2); cout << ":";
    printTime(a3); cout << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}