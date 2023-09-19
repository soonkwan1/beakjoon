#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    map<int, int> S;
    for (int i=1; i<=20; i++){
        S[i] = 0;
    }
    int n, x;
    cin >> n;
    string cmd;
    for (int i=0; i<n; i++){
        cin >> cmd;
        // add
        if (cmd == "add"){
            cin >> x;
            if (S[x] == 0){
                S[x] = 1;
            }
        }
        // remove
        else if (cmd == "remove"){
            cin >> x;
            if (S[x] == 1){
                S[x] = 0;
            }
        }
        // check
        else if (cmd == "check"){
            cin >> x;
            cout << S[x] << "\n";
        }
        // toggle
        else if (cmd == "toggle"){
            cin >> x;
            if (S[x] == 1){
                S[x] = 0;
            }
            else if (S[x] == 0) {
                S[x] = 1;
            }
        }
        // all
        else if (cmd == "all"){
            for (int j=1; j<=20; j++){
                S[j] = 1;
            }
        }
        // empty
        else if (cmd == "empty"){
            for (int j=1; j<=20; j++){
                S[j] = 0;
            }
        }
    }
}
int main(){
    INIT();
    INPUT();
    return 0;
}