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
    double d;
    cout.precision(2);
    cout << fixed;
    while (true){
        cin >> d;
        if (d == -1) break;
        cout << "Objects weighing " << d << 
        " on Earth will weigh " << d * 0.167 << " on the moon." << endl;
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