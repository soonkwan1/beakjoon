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
    string line; cin >> line;
    unordered_map<int, int> um;
    for (int i=0; i<line.size(); i++){
        int tmp = int(line[i]) - int('0');
        um[tmp]++;
    }

    if (um[3] || um[4] || um[5] || um[6] || um[7] || um[9]){
        cout << 0 << endl;
    }
    else if (!um[0] || !um[2] || !um[1] || !um[8]){
        cout << 1 << endl;
    }
    else if (um[0] == um[2] && um[2] == um[1] && um[1] == um[8]){
        cout << 8 << endl;
    }
    else{
        cout << 2 << endl;
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