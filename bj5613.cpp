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
    int start; cin >> start;

    while(true){
        string n; cin >> n;
        if (n == "=") {
            cout << start << endl;
            break;
        }
        else if (n == "+"){
            int tmp; cin >> tmp;
            start += tmp;
        }
        else if (n == "-"){
            int tmp; cin >> tmp;
            start -= tmp;
        }
        else if (n == "/"){
            int tmp; cin >> tmp;
            start /= tmp;
        }
        else if (n == "*"){
            int tmp; cin >> tmp;
            start *= tmp;
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