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
    cin.ignore();
    while (n--){
        string line; getline(cin, line);
        int tmp = 0;
        for (int i=0; i<line.size(); i++){
            if (line[i] == ' ') continue;
            tmp += int(line[i]) - 64;
        }

        if (tmp == 100) cout << "PERFECT LIFE" << endl;
        else cout << tmp << endl;
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