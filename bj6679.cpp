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

int digitTrans(int n, int mo){
    vector<int> v;
    while (n != 0){
        v.push_back(n % mo);
        n /= mo;
    }
    int ret = 0;
    for (int i=v.size() - 1; i>=0; i--) ret += v[i];
    return ret;
}
void INPUT(){
    for (int i=1000; i<10000; i++){
        int n1 = digitTrans(i, 10);
        int n2 = digitTrans(i, 12);
        int n3 = digitTrans(i, 16);
        if (n1 == n2 && n2 == n3){
            cout << i << endl;
        }
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}