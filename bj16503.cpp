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

int getNum(int n1, int n2, char c){
    if (c == '+') return n1 + n2;
    else if (c == '-') return n1 - n2;
    else if (c == '*') return n1 * n2;
    return n1 / n2;
}

void INPUT(){
    int a, b, c; char c1, c2;
    cin >> a >> c1 >> b >> c2 >> c;
    int tmp1 = getNum(getNum(a, b, c1), c, c2);
    int tmp2 = getNum(a, getNum(b, c, c2), c1);

    cout << min(tmp1, tmp2) << endl;
    cout << max(tmp1, tmp2) << endl;;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}