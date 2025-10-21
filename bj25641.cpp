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
    deque<char> dq;
    int n; cin >> n;
    string line; cin >> line;
    int cnts = 0; int cntt = 0;
    for (int i=0; i<n; i++){
        if (line[i] == 's') cnts++;
        else if (line[i] == 't') cntt++;
        dq.push_back(line[i]);
    }

    while (true){
        if (cnts == cntt){
            while (!dq.empty()){
                cout << dq.front();
                dq.pop_front();
            }
            cout << endl;
            break;
        }

        char tmp = dq.front();
        dq.pop_front();
        if (tmp == 's') cnts--;
        else if (tmp == 't') cntt--;
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