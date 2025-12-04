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
    vector<string> v(8);
    v[0] = "TTT"; v[1] = "TTH"; v[2] = "THT"; v[3] = "THH";
    v[4] = "HTT"; v[5] = "HTH"; v[6] = "HHT"; v[7] = "HHH";
    while (n--){
        unordered_map<string, int> um;

        string line; cin >> line;
        string tmp = "";
        tmp += line[0]; tmp += line[1];

        for (int i=2; i<line.size(); i++){
            string t = tmp + line[i];
            um[t]++;
            tmp = line[i-1]; tmp += line[i];
        }
        for (int i=0; i<8; i++){
            cout << um[v[i]] << " ";
        }
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