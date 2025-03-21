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

void INPUT(){
    int a, b, c, n; cin >> a >> b >> c >> n;
    for (int i=0; i<=300; i++){
        for (int j=0; j<=300; j++){
            for (int k=0; k<=300; k++){
                if (a * i + b * j + c * k == n){
                    cout << 1 << endl;
                    return;
                }
            }
        }
    }
    cout << 0 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}