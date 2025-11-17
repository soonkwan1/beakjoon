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

int whatScore(double n){
    if (n <= 3) return 100;
    if (n <= 6) return 80;
    if (n <= 9) return 60;
    if (n <= 12) return 40;
    if (n <= 15) return 20;
    return 0;
}

void INPUT(){
    int t; cin >> t;
    while (t--){
        vector<double> v(12);
        for (int i=0; i<12; i++) cin >> v[i];

        int score1 = 0;
        for (int i=0; i<6; i+=2){
            score1 += whatScore(sqrt(pow(v[i], 2) + pow(v[i + 1], 2))); 
        }
        int score2 = 0;
        for (int i=6; i<12; i+=2){
            score2 += whatScore(sqrt(pow(v[i], 2) + pow(v[i + 1], 2)));
        }

        cout << "SCORE: " << score1 << " to " << score2 << ", ";
        if (score1 == score2) cout << "TIE." << endl;
        else if (score1 > score2) cout << "PLAYER 1 WINS." << endl;
        else cout << "PLAYER 2 WINS." << endl;
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