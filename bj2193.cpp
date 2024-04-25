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

int n;
int ans;
typedef struct Node{
    ll a11, a12, a21, a22;
}Node;
void INPUT(){
    cin >> n;
}
Node mulMat(Node m1, Node m2){
    Node ret;
    ret.a11 = m1.a11 * m2.a11 + m1.a12 * m2.a21;
    ret.a12 = m1.a11 * m2.a12 + m1.a12 * m2.a22;
    ret.a21 = m1.a21 * m2.a11 + m1.a22 * m2.a21;
    ret.a22 = m1.a21 * m2.a12 + m1.a22 * m2.a22;
    return ret;
}
Node divideAndConquer(Node ref, int n){
    if (n == 1){
        return ref;
    }

    Node tmp = divideAndConquer(ref, n / 2);
    tmp = mulMat(tmp, tmp);
    if (n % 2 == 1){
        tmp = mulMat(tmp, ref);
    }
    return tmp;
}
void SOLUTION2(){
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    n -= 1;
    Node s1; s1.a11 = s1.a12 = s1.a21 = 1, s1.a22 = 0;
    Node ans = divideAndConquer(s1, n);
    cout << ans.a12 + ans.a22 << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION2();
    return 0;
}