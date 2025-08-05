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
    while (true){
        string line; cin >> line;
        if (line == "#") break;

        vector<char> v;
        
        int cnt[2] = {0, 0};
        for (int i=0; i<line.size(); i++){
            if (line[i] == 'o'){
                if (cnt[1] % 2 == 0) v.push_back('1');
                else v.push_back('0');
            }
            else if (line[i] == 'e'){
                if (cnt[1] % 2 == 0) v.push_back('0');
                else v.push_back('1');
            }
            else {
                v.push_back(line[i]);
                cnt[int(line[i]) - 48]++;
            }
        }

        for (int i=0; i<v.size(); i++){
            cout << v[i];
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