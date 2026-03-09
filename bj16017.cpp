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
    int fr, sc, th, fo; cin >> fr >> sc >> th >> fo;
    if (fr == 8 || fr == 9){
        if (sc == th) {
            if (fo == 8 || fo == 9) cout << "ignore" << endl;
            else cout << "answer" << endl;
        }
        else cout << "answer" << endl;
    }
    else cout << "answer" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}