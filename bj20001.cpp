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
    string tmp;
    for (int i=0; i<3; i++) cin >> tmp;

    int problem = 0;
    int prev = 0;
    while (true){
        string line; cin >> line;
        if (line == "고무오리") {
            prev = problem;
            if (problem) problem--;
            else problem += 2;
        }
        else if (line == "문제") problem++;
        else if (line == "디버깅"){
            cin >> line;
            break;
        }
    }

    if (!prev) cout << "고무오리야 사랑해" << endl;
    else cout << "힝구" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}