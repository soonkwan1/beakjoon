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
    int n; cin >> n;
    string line; cin >> line;

    int state = 0;
    if (line[0] == '1') state = 1;
    else state = 2;

    for (int i=1; i<line.size(); i++){
        if (state == 1 && line[i] == '2') state = 2;
        else if (state == 2 && line[i] == '1') state = 1;
        else{
            state = 3;
            break;
        }
    }

    if (state == 3) cout << "No" << endl;
    else cout << "Yes" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}