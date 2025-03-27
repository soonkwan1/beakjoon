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
    vector<int> va(10);
    vector<int> vb(10);
    for (int i=0; i<10; i++){
        cin >> va[i];
    }
    for (int i=0; i<10; i++){
        cin >> vb[i];
    }

    int a_score = 0; int b_score = 0;
    vector<char> sc;
    for (int i=0; i<10; i++){
        if (va[i] > vb[i]){
            a_score +=3;
            sc.push_back('A');
        }
        else if (vb[i] > va[i]){
            b_score += 3;
            sc.push_back('B');
        }
        else{
            a_score++; b_score++;
            sc.push_back('D');
        }
    }
    cout << a_score << " " << b_score << endl;
    if (a_score > b_score) {
        cout << "A" << endl;
        return;
    }
    else if (b_score > a_score) {
        cout << "B" << endl;
        return;
    }
    else {
        for (int i=9; i>=0; i--){
            if (sc[i] == 'A') {
                cout << 'A' << endl;
                return;
            }
            else if (sc[i] == 'B'){
                cout << 'B' << endl;
                return;
            }
        }
    }
    cout << 'D' << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}