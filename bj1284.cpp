#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    while (true){
        string line; cin >> line;
        if (line == "0") break;

        int ans = 1;
        for (int i=0; i<line.size(); i++){
            if (line[i] == '1') ans += 2;
            else if (line[i] == '0') ans += 4;
            else ans += 3;
            ans++;
        }
        cout << ans << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}