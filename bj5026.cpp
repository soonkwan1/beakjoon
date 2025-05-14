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
    for (int i=0; i<n; i++){
        string line; cin >> line;
        if (line == "P=NP") cout << "skipped" << endl;
        else{
            string tmp1 = "";
            string tmp2 = "";

            int state = 0;
            for (int i=0; i<line.size(); i++){
                if (line[i] == '+'){
                    state = 1;
                }
                else if (state == 0){
                    tmp1 = tmp1 + line[i];
                }
                else if (state == 1){
                    tmp2 = tmp2 + line[i];
                }
            }

            cout << stoi(tmp1) + stoi(tmp2) << endl;
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