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
    for (int i=0; i<n; i++){
        string line; getline(cin, line);
        if (line[0] >= 97 && line[0] <= 122) cout << char(int(line[0]) - 32);
        else cout << line[0];
        for (int j=1; j<line.size(); j++) cout << line[j];
        cout << endl;
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