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
    string line;
    getline(cin, line);
    int state = 0;
    for (int i=0; i<line.size(); i++){
        if (line[i] == 'D' || line[i] == 'd'){
            state = 1;
            continue;
        }

        if (line[i] == '2'){
            if (state){
                cout << "D2" << endl;
                return;
            }
        }
        state = 0;
    }
    cout << "unrated" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}